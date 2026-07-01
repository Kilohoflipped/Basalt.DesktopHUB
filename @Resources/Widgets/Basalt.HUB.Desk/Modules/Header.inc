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
MeterStyle=MeterStyleMono
StringStyle=Bold
FontColor=#ColorNeutralForegroundSecondary#
FontSize=#HeaderCodeFontSize#

[MeterMark]
Meter=String
MeterStyle=MeterStyleSymbol
Text=#HeaderMark#
X=#HeaderMarkX#
Y=#HeaderMarkY#
FontSize=24
FontColor=#Accent#

[MeterTime]
Meter=String
MeterStyle=MeterStylePrimary
MeasureName=MeasureTime
Text=%1
X=#TimeX#
Y=#TimeY#
FontSize=38
FontColor=#TextPrimary#

[MeterDate]
Meter=String
MeterStyle=MeterStyleMono
MeasureName=MeasureDate
Text=%1
X=#DateX#
Y=#DateY#
FontSize=10
FontColor=#TextSecondary#

[MeterDay]
Meter=String
MeterStyle=MeterStylePrimary
MeasureName=MeasureDay
Text=%1
X=#DayX#
Y=#DayY#
FontSize=10
FontColor=#TextMuted#

[MeterDividerTop]
Meter=Shape
X=#PanelPaddingX#
Y=#DividerTopY#
Shape=Rectangle 0,0,#PanelInnerW#,1 | Fill Color #Line# | StrokeWidth 0

[MeterDeskTitle]
Meter=String
MeterStyle=MeterStylePrimary
Text=#DeskTitle#
X=#PanelPaddingX#
Y=#DeskTitleY#
FontSize=21
FontColor=#TextPrimary#
StringStyle=Bold

[MeterDeskSubtitle]
Meter=String
MeterStyle=MeterStyleMono
Text=#DeskSubtitle#
X=33
Y=#DeskSubtitleY#
FontSize=9
FontColor=#TextSecondary#

[MeterSectionAccent]
Meter=Shape
X=#PanelPaddingX#
Y=#SectionAccentY#
Shape=Rectangle 0,0,3,14 | Fill Color #Accent# | StrokeWidth 0

[MeterSectionTitle]
Meter=String
MeterStyle=MeterStylePrimary
Text=#SectionTitle#
X=44
Y=#SectionTitleY#
FontSize=10
FontColor=#TextSecondary#
StringStyle=Bold
