open_file=open("info.txt","a")
username=input()
password=input()
open_file.write(" " + username)
open_file.write(" "+password)
open_file.close()
open_file=open("info.txt","r")
print(open_file.read())