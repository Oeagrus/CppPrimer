@echo off

for /f "tokens=1,2 delims=." %%i in ('dir /b') do (
	if "%%j"=="obj" (
		if exist %%i.%%j del %%i.%%j
	)
	if "%%j"=="exe" (
		if exist %%i.%%j del %%i.%%j
	)
)

pause
