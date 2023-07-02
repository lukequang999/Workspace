from web3 import Web3
from eth_account import Account
from getpass import getpass

# Khởi tạo provider
provider = Web3.HTTPProvider('https://rpc-mainnet.maticvigil.com/')  # Thay đổi URL RPC nếu cần thiết
web3 = Web3(provider)

# Kích hoạt tính năng Mnemonic của Account
Account.enable_unaudited_hdwallet_features()

# Đọc key phrase từ file
keyfile_path = '12key.txt'  # Đường dẫn đến file chứa key phrase
with open(keyfile_path, 'r') as f:
    key_phrases = f.read().strip().split('\n')

# Nhập địa chỉ ví người nhận
recipient_address = input('Nhập địa chỉ ví người nhận: ')

# Gửi MATIC coin từ mỗi ví
for key_phrase in key_phrases:
    # Tạo tài khoản từ key phrase
    account = Account.from_mnemonic(key_phrase)

    # Lấy địa chỉ ví
    address = account.address

    # Lấy số dư MATIC
    balance = web3.eth.get_balance(address)
    balance_in_matic = Web3.from_wei(balance, 'ether')
    # In thông tin số dư
    with open("address.txt",mode="a+",encoding="utf-8") as f2:
        f2.write(key_phrase+ "|" + address+"\n")
    print(f'Địa chỉ ví: {address}')
    print(f'Số dư MATIC: {balance_in_matic} MATIC')

    # Kiểm tra số dư trước khi gửi
    if balance_in_matic <= 0:
        print('Số dư không đủ để thực hiện giao dịch.')
        continue

    gas_limit = 21000  # Giới hạn gas
    gas_price = web3.eth.gas_price
    value = balance - gas_limit * gas_price
    print(f'Phí gas: {value}')
    if value <= 0:
        print('Số dư không đủ để trả phí gas.')
        continue
    # Xác nhận giao dịch
    # Tạo và ký giao dịch
    transaction = {
        'to': recipient_address,
        'value': value,
        'gas': gas_limit,
        'gasPrice': gas_price,
        'nonce': web3.eth.get_transaction_count(address),
        'chainId': web3.eth.chain_id,
    }

    signed_transaction = account.sign_transaction(transaction)

    # Gửi giao dịch
    tx_hash = web3.eth.send_raw_transaction(signed_transaction.rawTransaction)

    with open("log.txt",mode="a+", encoding="utf-8") as f1:
        f1.write(address + "|" + f'{(balance_in_matic)}' + "|" + f'{web3.to_hex(tx_hash)}'+"\n")
    print('Giao dịch thành công.')
    print(f'Hash giao dịch: {web3.to_hex(tx_hash)}')
    print('----------------------')