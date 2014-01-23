editCreateWorkout: editorButtons: segmentRowButtons: bEnd
If [ $$stop ≠ "" ]
Exit Script [ ]
End If
#
#This script step insures that a workouts time
#cannot be modified and then used without re-totaling
#the workout first to take account of the modification.
Set Field [ activity::go; "" ]
#
Set Variable [ $segment; Value:Right ( Get ( ActiveLayoutObjectName ) ; 2 ) ]
Set Variable [ $$stop; Value:1 ]
Go to Object [ Object Name: "b" & $segment ]
Set Variable [ $time; Value:Get ( ActiveFieldContents ) ]
Go to Object [ Object Name: "bEnd" & $segment ]
If [ Get ( ActiveFieldContents ) = "" or $time ≠ GetValue ( Get (ActiveFieldContents ) ; 2 ) ]
Set Field [ $segment & ¶ &
$time & ¶ ]
Set Variable [ $$stop ]
Go to Field [ ]
Else If [ Get ( ActiveFieldContents ) ≠ "" and $time = GetValue ( Get (ActiveFieldContents ) ; 2 ) ]
Set Field [ "" ]
Go to Field [ ]
Set Variable [ $$stop ]
End If
January 8, 平成26 15:34:30 Fat and Muscle Efﬁciency Research.fp7 - bEnd -1-
