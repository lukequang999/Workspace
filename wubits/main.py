import requests, json, os
import threading, time, random
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.support import expected_conditions as EC
import tkinter as tk
def Function_(vi_tri,PROXY):    

    try:  # Hàm xử lý
        stt = Main_.check_stt
        Main_.check_stt += 1
        folder_run = os.getcwd()
        profileID = Main_.list_profile[stt]['id']
        update_proxy = f'{Main_.API_URL}/v2/update-proxy?id={profileID}&proxy={PROXY}'
        response = requests.get(update_proxy)
        time.sleep(3)
        arg = f'{Main_.API_URL}/v2/start?profile_id=%s&proxy={PROXY}&addination_args=--window-size=400,600 --window-position=%s,%s'%\
                (profileID, str((vi_tri % 7)*300), str((vi_tri // 7)*300))
        response = requests.get(arg).json()
        time.sleep(3)
        options = Options()
        options.debugger_address = response["selenium_remote_debug_address"]
        browser = webdriver.Chrome(response["selenium_driver_location"], options= options)
        action, wait = ActionChains(browser), WebDriverWait(browser, 10)
        browser.switch_to.window(browser.current_window_handle)
        with open('wubits\\linkpost.txt', 'r') as f:
           links = f.readlines()
           random_link = random.choice(links).rstrip()


        
        
        # with open("ref.txt", mode= "r", encoding="utf-8-sig") as file:
        #     list_ref = file.read().split("\n")

        # ref = random.choice(list_ref)
        # # open dosi url 
        # browser.get(ref)
        # root = tk.Tk()
        # root.withdraw()
        # try:
        #     wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div[1]/section/div/div[2]/button')))
        #     browser.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div[1]/section/div/div[2]/button').click()
        #     time.sleep(2)

        #     try:
        #         # js = 'return document.querySelector("#layer-container > div > div > div.sc-79cp95-3.jKVkjO > div > div > div > div.confirm-modal-footer > button.button.confirm-button.button-color-green.button-size-xxlarge").click()'
        #         # browser.execute_script(js)
        #         # time.sleep(2)
        #         check=True
        #         while check:
        #             if browser.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div[1]/section/div/div[2]/button'):
        #                 ref = random.choice(list_ref)
        #                 # open dosi url 
        #                 browser.get(ref)
        #                 try:
        #                     wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div[1]/section/div/div[2]/button')))
        #                     browser.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div[1]/section/div/div[2]/button').click()
        #                     time.sleep(2)
        #                 except:
        #                     pass
        #             else:
        #                 check=False

        #     except:
        #         pass
        #     wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="social-providers"]/a[2]')))
        #     browser.find_element(By.XPATH, '//*[@id="social-providers"]/a[2]').click()
        #     #select mail
            
        #     wait.until(EC.presence_of_element_located((By.XPATH, '/html/body/div/div/div/div/div/div/div/div/div[1]/div[2]/div[2]/div[1]/div/div/div/div[1]/div/span/span')))
        #     browser.find_element(By.XPATH, '/html/body/div/div/div/div/div/div/div/div/div[1]/div[2]/div[2]/div[1]/div/div/div/div[1]/div/span/span').click()
        #     time.sleep(2)
        # except:
        #     gmail = Main_.list_gmail.pop(0)
        #     gmail_t = gmail.split('|')
        #     # browser.get("https://accounts.google.com/signin")
        #     if wait.until(EC.presence_of_element_located((By.NAME, "identifier"))):
        #         browser.find_element(By.NAME, "identifier").send_keys(gmail_t[0])
        #         browser.find_element(By.CSS_SELECTOR, "#identifierNext").click()
        #         for element in 10*["password", "Passwd"]:
        #             try:
        #                 browser.find_element(By.NAME, element).send_keys(gmail_t[1])
        #                 browser.find_element(By.CSS_SELECTOR, "#passwordNext").click()
        #                 break
        #             except:
        #                 time.sleep(1)
        #         try:
        #             time.sleep(3)
        #             browser.find_element(By.ID, "confirm").click()
                    
        #         except:
        #             pass
        #         try:  # Cái này là nút confirm cho email mới
        #             time.sleep(5)
        #             js = 'return document.querySelector("#view_container > div > div > div.pwWryf.bxPAYd > div > div.WEQkZc > div > form > span > section > div > div > div > ul > li:nth-child(3) > div > div.vxx8jf").click()'
        #             browser.execute_script(js)
        #             wait.until(EC.presence_of_element_located((By.ID, "knowledge-preregistered-email-response")))
        #             browser.find_element(By.ID, "knowledge-preregistered-email-response").send_keys(gmail_t[2])
        #             js = 'return document.querySelector("#view_container > div > div > div.pwWryf.bxPAYd > div > div.zQJV3 > div > div.qhFLie > div > div > button > div.VfPpkd-RLmnJb").click()'
        #             browser.execute_script(js)
        #             time.sleep(7)
                    

        #         except:
        #             pass

        #         url_mail = browser.current_url
        #         if 'members.dosi.world' in url_mail:
        #             with open("data\\gmail done.txt", mode="a+") as file:
        #                 file.write(gmail+ "\n")

        #         try:
        #             js = 'return document.querySelector("#yDmH0d > c-wiz.yip5uc.SSPGKf > c-wiz > div > div.p9lFnc > div > div > div > div.ZRg0lb.Kn8Efe > div:nth-child(3) > div > div.yKBrKe > div").click()'
        #             browser.execute_script(js)
        #         except:
        #             pass
        #     else:
        #         for handle in browser.window_handles:
        #             browser.switch_to.window(handle)
        #             browser.close()
        #     try:
        #         wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div[1]/section/div/div[2]/button')))
        #         browser.find_element(By.XPATH, '//*[@id="root"]/div[1]/div[2]/div/div[1]/section/div/div[2]/button').click()
        #         time.sleep(2)

        #         try:
        #             js = 'return document.querySelector("#layer-container > div > div > div.sc-79cp95-3.jKVkjO > div > div > div > div.confirm-modal-footer > button.button.confirm-button.button-color-green.button-size-xxlarge").click()'
        #             browser.execute_script(js)
        #             time.sleep(2)
        #         except:
        #             pass
        #         wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="social-providers"]/a[3]')))
        #         browser.find_element(By.XPATH, '//*[@id="social-providers"]/a[3]').click()
        #         #select mail
        #         wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="view_container"]/div/div/div[2]/div/div[1]/div/form/span/section/div/div/div/div/ul/li[1]/div/div[1]/div/div[2]')))
        #         browser.find_element(By.XPATH, '//*[@id="view_container"]/div/div/div[2]/div/div[1]/div/form/span/section/div/div/div/div/ul/li[1]/div/div[1]/div/div[2]').click()

        #     except:
        #         pass

        # #select region
        # try:
        #     time.sleep(2)
        #     wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="root"]/main/div[2]/button')))
        #     browser.find_element(By.XPATH, '//*[@id="sel_country_001"]').click()
        #     browser.find_element(By.ID, "sel_country_001").send_keys("Vietnam")
        #     browser.find_element(By.XPATH, '//*[@id="root"]/main/div[2]/button').click()
        # except:
        #     pass
        

        # # accept rull
        # try:
        #     time.sleep(2)
        #     browser.execute_script("window.scrollTo(0, 400)")
        #     js = 'return document.querySelector("#check_3525").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/3)
        #     js = 'return document.querySelector("#root > main > div > button").click()'
        #     browser.execute_script(js)
        # except:
        #     pass


        # # next password
        # try:
        #     time.sleep(5)
        #     js = 'return document.querySelector("#root > div > button").click()'
        #     browser.execute_script(js)
        # except:
        #     pass
        
        # try:
            
        #     # set password
        #     # 1
        #     time.sleep(2)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(1)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(5)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(9)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(3)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(5)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(7)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     # confirm password
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(1)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(5)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(9)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(3)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(5)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(7)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)

        #     js = 'return document.querySelector("#root > div > div > div.bx_btn > button").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        # except:
        #     pass
        
        
        # #click OK
        # try:
        #     wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="root"]/div[1]/div/div/div/div[2]/button')))
        #     browser.find_element(By.XPATH, '//*[@id="root"]/div[1]/div/div/div/div[2]/button').click()
        # except:
        #     pass
        
        
        # # set number phone
        # browser.get("https://wallet.dosi.world/account/change-phone-number")

        # try:
        #     time.sleep(1) 
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(2)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(6)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(10)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(4)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(6)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)
        #     js = 'return document.querySelector("#root > main > section > div.bx_keypad > button:nth-child(8)").click()'
        #     browser.execute_script(js)
        #     time.sleep(1/5)

        # except:
        #     pass

        # #select region
        # try:
        #     time.sleep(2)
        #     # wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="root"]/main/div[2]/button')))
        #     browser.find_element(By.ID, 'sel_country_001').click()
        #     browser.find_element(By.ID, "sel_country_001").send_keys("Vietnam")
        #     browser.find_element(By.XPATH, '//*[@id="root"]/main/div[2]/button').click()

        #     for i in range(5): # Nhận sđt
        #         otp1 = requests.get(f"https://api.viotp.com/request/getv2?token={Main_.token_viotp}&serviceId=821").json()
        #         print(otp1)
        #         if "Hiện không có sẵn số điện thoại" in str(otp1):
        #             time.sleep(5)
        #         else:
        #             browser.find_element(By.ID, "phone_num_001").send_keys(otp1["data"]["phone_number"]) # send phone number
        #             time.sleep(1)
        #             wait.until(EC.presence_of_element_located((By.XPATH, '//*[@id="root"]/main/div[1]/div/form/fieldset/div[2]/div/button')))
        #             browser.find_element(By.XPATH, '//*[@id="root"]/main/div[1]/div/form/fieldset/div[2]/div/button').click()
        #             time.sleep(10)
        #             break
                
        #     for i in range(60):  # điền otp trả về
        #         time.sleep(3)
        #         try:
        #             otp2 = requests.get(f"https://api.viotp.com/session/getv2?requestId=%s&token={Main_.token_viotp}"%(otp1["data"]["request_id"])).json()
        #             print(otp2)
        #             if otp2["status_code"] == 200:
        #                 browser.find_element(By.ID, "code_001").send_keys(otp2["data"]["Code"])
        #                 time.sleep(1)
        #                 break
        #         except:
        #             pass
        #     try:
        #         js = 'return document.querySelector("#root > main > div.bx_full_btn > button").click()'
        #         browser.execute_script(js)
        #         time.sleep(2)
        #     except:
        #         pass
        # except:
        #     pass

        # try:
        #     js = 'return document.querySelector("#root > div > div > div.bx_btn > button").click()'
        #     browser.execute_script(js)
        #     time.sleep(1)
        # except:
        #     pass

        
        try:
            browser.get(random_link)
            time.sleep(5)
        except:
            pass
    except:
        pass

    #--------------------------------------------------------------------------------------------------------
    try:
        update_proxy = f'{Main_.API_URL}/v2/update-proxy?id={profileID}&proxy='''
        response = requests.get(update_proxy)
        for handle in browser.window_handles:
            browser.switch_to.window(handle)
            browser.close()
    except:
        pass
    
    

class Chrome():
    def __init__(self): # Mở file
        with open("url.txt", mode="r") as file:
            self.API_URL = file.read()
        with open("data\\proxy.txt", mode= "r", encoding="utf-8-sig") as file:
            self.proxy = file.read().split("\n")
        self.list_profile, abc = requests.get(f"{self.API_URL}/v2/profiles").json(), []
        for check_pro in range(self.file_config["Start"], self.file_config["End"]):
            for check_prof in self.list_profile:
                if str(check_pro) == check_prof["name"] and check_prof["id"] not in self.list_profile_done:
                    abc.append(check_prof)
                    break
        self.list_profile = abc
        self.check_stt, threads = 0, []
        acc_mail = []
    def Creat_Threaded(self):
        while True:
            threads = []
            list_proxy = []
            # count = 0
            for vi_tri in range(len(self.proxy)):
                for i in range(1):
                    get_tinsoft = requests.get("http://proxy.tinsoftsv.com/api/changeProxy.php?key=" + Main_.proxy[vi_tri])
                    proxy_drive = get_tinsoft.json()
                    print(proxy_drive)
                    if proxy_drive["success"] == True:
                        break
                    elif "Request so fast, fix your code or be banned" in get_tinsoft.text:
                        time.sleep(7)
                        continue
                    elif "for next change" in get_tinsoft.text and "false" in get_tinsoft.text:
                        if proxy_drive["next_change"] > 6:
                            time.sleep(proxy_drive["next_change"] + 1)
                            continue
                        else:
                            time.sleep(7)                        
                PROXY = proxy_drive.get("proxy")  
                list_proxy.append(PROXY)




                print(f"IP:{vi_tri+1}/{len(self.proxy)}")
       
            for i in range(1):
                PROXY = list_proxy[0]
                vi_tri = i
                threads += [threading.Thread(target= Function_, args=(vi_tri,PROXY))]
            for t in threads:
                t.start()
                time.sleep(1)
            for t in threads:
                t.join()
            
if __name__ == "__main__":
    Main_ = Chrome()
    Main_.Creat_Threaded()