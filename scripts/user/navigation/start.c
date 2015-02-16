user: navigation: start
Allow User Abort [ Off ]
Set Error Capture [ On ]
#
#Checked if opened by user or by backup script.
// Paste [ ]
[ Select ]
// If [ ]
// End If
#
#Set current window title and size to fit layout.
Set Window Title [ Current Window; New Title: "Heart Whisperer" ]
Adjust Window
[ Resize to Fit ]
Show/Hide Text Ruler
[ Hide ]
Show/Hide Status Area
[ Lock; Hide ]
Go to Record/Request/Page
[ First ]
Perform Script [ “loadUser” ]
#
#
#Show regular menus if Admin logs in only.
Show/Hide Text Ruler
[ Hide ]
If [ Get ( AccountName ) = "Admin" ]
Show/Hide Status Area
[ Hide ]
Install Menu Set [ “[Standard FileMaker Menus]” ]
Else
Show/Hide Status Area
[ Lock; Hide ]
End If
#
#Report version number to Memory Switch Table.
Set Field [ MemorySwitch::versionFMER; Icons01::version ]
February 8, 平成26 12:38:56 Heart Whisperer.fp7 - start -1-
