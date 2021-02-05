[MeterTitleDrive1]
Meter=String
MeterStyle=StyleTitleDrive
X=225
Y=5R
Text=Drive 1
[MeterInputDrive1]
Meter=String
MeterStyle=StyleInputDrive
X=625
Y=([MeterTitleDrive1:Y]-2)
H=25
W=80
LeftMouseUpAction=[!CommandMeasure MeasureInputDrive1 "ExecuteBatch ALL"]
Text=#Drive1#
[MeasureInputDrive1]
Measure=Plugin
Plugin=InputText
X=([MeterInputDrive1:X]+5)
Y=([MeterInputDrive1:Y]+5)
H=25
W=90
FontSize=14
FontColor=255,255,255
SolidColor=26,26,26
AntiAlias=1
FocusDismiss=1
DefaultValue=#Drive1#
Command1=[!WriteKeyValue Variables Drive1 "$UserInput$:/" "#@#variables.ini"][!RefreshGroup "Drive"][!Refresh]
DynamicVariables=1
[MeterTitleDrive2]
Meter=String
MeterStyle=StyleTitleDrive
X=225
Y=5R
Text=Drive 2
[MeterInputDrive2]
Meter=String
MeterStyle=StyleInputDrive
X=625
Y=([MeterTitleDrive2:Y]-2)
H=25
W=80
LeftMouseUpAction=[!CommandMeasure MeasureInputDrive2 "ExecuteBatch ALL"]
Text=#Drive2#
[MeasureInputDrive2]
Measure=Plugin
Plugin=InputText
X=([MeterInputDrive2:X]+5)
Y=([MeterInputDrive2:Y]+5)
H=25
W=90
FontSize=14
FontColor=255,255,255
SolidColor=26,26,26
AntiAlias=1
FocusDismiss=1
DefaultValue=#Drive2#
Command1=[!WriteKeyValue Variables Drive2 "$UserInput$:/" "#@#variables.ini"][!RefreshGroup "Drive"][!Refresh]
DynamicVariables=1
[MeterTitleDrive3]
Meter=String
MeterStyle=StyleTitleDrive
X=225
Y=5R
Text=Drive 3
[MeterInputDrive3]
Meter=String
MeterStyle=StyleInputDrive
X=625
Y=([MeterTitleDrive3:Y]-2)
H=25
W=80
LeftMouseUpAction=[!CommandMeasure MeasureInputDrive3 "ExecuteBatch ALL"]
Text=#Drive3#
[MeasureInputDrive3]
Measure=Plugin
Plugin=InputText
X=([MeterInputDrive3:X]+5)
Y=([MeterInputDrive3:Y]+5)
H=25
W=90
FontSize=14
FontColor=255,255,255
SolidColor=26,26,26
AntiAlias=1
FocusDismiss=1
DefaultValue=#Drive3#
Command1=[!WriteKeyValue Variables Drive3 "$UserInput$:/" "#@#variables.ini"][!RefreshGroup "Drive"][!Refresh]
DynamicVariables=1
[MeterTitleDrive4]
Meter=String
MeterStyle=StyleTitleDrive
X=225
Y=5R
Text=Drive 4
[MeterInputDrive4]
Meter=String
MeterStyle=StyleInputDrive
X=625
Y=([MeterTitleDrive4:Y]-2)
H=25
W=80
LeftMouseUpAction=[!CommandMeasure MeasureInputDrive4 "ExecuteBatch ALL"]
Text=#Drive4#
[MeasureInputDrive4]
Measure=Plugin
Plugin=InputText
X=([MeterInputDrive4:X]+5)
Y=([MeterInputDrive4:Y]+5)
H=25
W=90
FontSize=14
FontColor=255,255,255
SolidColor=26,26,26
AntiAlias=1
FocusDismiss=1
DefaultValue=#Drive4#
Command1=[!WriteKeyValue Variables Drive4 "$UserInput$:/" "#@#variables.ini"][!RefreshGroup "Drive"][!Refresh]
DynamicVariables=1
