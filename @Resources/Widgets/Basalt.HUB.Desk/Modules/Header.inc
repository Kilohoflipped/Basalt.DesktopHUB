[MeterStatusDot]
Meter=Shape
X=#HeaderStatusDotX#
Y=#HeaderStatusDotY#
Shape=#HeaderStatusDotDiameterShape# | Fill Color #ColorBrandForeground# | StrokeWidth #HeaderStatusDotStrokeWidth#

[MeterNodeCode]
Meter=String
X=#HeaderCodeX#
Y=#HeaderCodeY#
Text=#HeaderNodeCode#
MeterStyle=MeterStyleIdentifierBold
FontColor=#ColorNeutralForegroundTertiary#
FontSize=#HeaderCodeFontSize#

[MeterMark]
AntiAlias=1
PreserveAspectRatio=1
Meter=Image
X=#HeaderMarkX#
Y=#HeaderMarkY#
ImageName=#@#Assets\#HeaderMark#
W=#HeaderMarkFontSize#
H=#HeaderMarkFontSize#

[MeterTime]
Meter=String
X=#TimeX#
Y=#TimeY#
MeasureName=MeasureTime
Text=%1
MeterStyle=MeterStylePrimary
FontColor=#ColorNeutralForegroundPrimary#
FontSize=#TimeFontSize#

[MeterDateCJK]
Meter=String
X=#DateCJKX#
Y=#DateCJKY#
MeasureName=MeasureMonth
MeasureName2=MeasureDay
MeasureName3=MeasureWeekdayCJK
Text=#DateCJKTimeLabel#
MeterStyle=MeterStylePrimary
FontColor=#ColorNeutralForegroundSecondary#
FontSize=#DateCJKFontSize#

[MeterDate]
Meter=String
StringAlign=#DateAlign#
X=#DateX#
Y=#DateY#
MeasureName=MeasureWeekday
MeasureName2=MeasureMeasureMonthWord
MeasureName3=MeasureDay
Text=#DateTimeLabel#
MeterStyle=MeterStylePrimary
FontColor=#ColorNeutralForegroundSecondary#
FontSize=#DateFontSize#

[MeterDividerHeader]
Meter=Shape
X=#DividerHeaderX#
Y=#DividerHeaderY#
Shape=#DividerHeaderShape# | Fill Color #ColorNeutralStrokeSecondary# | StrokeWidth 0

[MeterDeskTitle]
Meter=String
X=#DeskTitleX#
Y=#DeskTitleY#
Text=#DeskTitle#
MeterStyle=MeterStyleTitleBold
StringStyle=Bold
FontColor=#ColorNeutralForegroundSecondary#
FontSize=#DeskTitleFontSize#

[MeterDeskSubtitle]
Meter=String
StringAlign=#DeskSubtitleAlign#
X=#DeskSubtitlex#
Y=#DeskSubtitleY#
Text=#DeskSubtitle#
MeterStyle=MeterStyleMono
FontColor=#ColorNeutralForegroundTertiary#
FontSize=#DeskSubtitleSize#
