@echo off

set "sourcePath=G:\keylogger"  
set "destinationPath=C:\testFolder\" 
xcopy "%sourcePath%" "%destinationPath%" /E /I /Y

echo dumping success!

pause
