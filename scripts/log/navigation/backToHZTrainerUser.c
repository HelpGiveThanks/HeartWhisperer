log: navigation: backToHZTrainerUser
Allow User Abort [ Off ]
Set Error Capture [ On ]
#
Close Window [ Name: "Planned Workouts"; Current file ]
Close Window [ Name: "Icons"; Current file ]
Close Window [ Name: "Select Workout"; Current file ]
Close Window [ Name: "Workout Editor"; Current file ]
Close Window [ Name: "Plan Week"; Current file ]
Set Window Title [ Current Window; New Title: "Heart Whisperer" ]
#
Go to Layout [ “Profile” (exerciseMHR) ]
#
Go to Record/Request/Page
[ First ]
Loop
Exit Loop If [ planlog::kuserGlobal = user::_Luser ]
Go to Record/Request/Page
[ Next; Exit after last ]
End Loop
January 30, 平成26 22:04:07 Heart Whisperer.fp7 - backToHZTrainerUser -1-
