import threading
import time 
def check():
       while True:
              time.sleep(2)
              print("Hi")
               
def main():
       t1=  threading.Thread(target=check, daemon=True)
       t1.start()
       t1.join()


if __name__=="__main__":
    main()