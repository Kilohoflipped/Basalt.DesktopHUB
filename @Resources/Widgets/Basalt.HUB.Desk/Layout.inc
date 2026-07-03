[Variables]
; ==================================
; 主容器
; ==================================
; 主容器位置
PanelX=0
PanelY=0
; 主容器几何
PanelW=430
PanelH=900
PanelRadius=22
PanelShape=Rectangle 0,0,#PanelW#,#PanelH#,#PanelRadius#
PanelStrokeWidth=1
; 主容器Padding量
PanelPaddingX=32
PanelPaddingY=38
; 主容器内部宽度
PanelInnerW=(#PanelW#-2*#PanelPaddingX#)

; ==================================
; Header
; ==================================
; HearDot位置
HeaderStatusDotX=#PanelPaddingX#
HeaderStatusDotY=#PanelPaddingY#
; HeaderDot几何
HeaderStatusDotDiameter=4.2
HeaderStatusDotDiameterShape=Ellipse 0,0,#HeaderStatusDotDiameter#,#HeaderStatusDotDiameter#
HeaderStatusDotStrokeWidth=0

; HeaderCode位置
HeaderCodeX=(#PanelPaddingX#+3*#HeaderStatusDotDiameter#)
HeaderCodeY=(#PanelPaddingY#-#HeaderCodeFontSize#*0.7)
; HeaderCode几何
HeaderCodeFontSize=11.5

; HeaderMark位置
HeaderMarkX=(#PanelW#-#PanelPaddingX#*0.3-#HeaderMarkFontSize#*0.8)
HeaderMarkY=(#PanelPaddingX#*0.3)
; HeaderMark几何
HeaderMarkFontSize=45

; Time位置
GeneralTimeY=(#HeaderCodeY#+38)

; 时钟位置
TimeX=(#PanelPaddingX#*0.9)
TimeY=(#GeneralTimeY#-#TimeFontSize#*0.5+0.5)
; 时钟几何
TimeFontSize=34

; DetailedTime位置
DetailedTimeX=172
DetailedTimeFontSize=12

; CJK日期位置
DateCJKX=#DetailedTimeX#
DateCJKY=(#GeneralTimeY#-#DateCJKFontSize#*0.5)
; 日期几何
DateCJKFontSize=#DetailedTimeFontSize#

; 日期位置
DateAlign=LeftBottom
DateX=#DetailedTimeX#
DateY=(#GeneralTimeY#+#DateFontSize#*0.5+#TimeFontSize#)
; 日期几何
DateFontSize=#DetailedTimeFontSize#

; Header分割线位置
DividerHeaderX=#PanelPaddingX#
DividerHeaderY=(#GeneralTimeY#+#TimeFontSize#+18)
DividerHeaderHeight=1.5
DividerHeaderShape=Rectangle 0,0,#PanelInnerW#,#DividerHeaderHeight#

; Title位置
DeskTitleX=(#PanelPaddingX#*1.05)
DeskTitleY=(#DividerHeaderY#+#DividerHeaderHeight#+11)
; Title几何
DeskTitleFontSize=21

; Subtitle位置
DeskSubtitleAlign=leftBottom
DeskSubtitleX=185
DeskSubtitleY=(#DeskTitleY#+#DeskTitleFontSize#+#DeskSubtitleSize#)
; Subtitle几何
DeskSubtitleSize=10

; ==================================
; QuickAccess
; ==================================
; Accent位置
SectionAccentX=#PanelPaddingX#
SectionAccentY=#DeskSubtitleY#+12
; Accent几何
SectionAccentWidth=3
SectionAccentHeight=(#SectionTitleSize#*1.1)
SectionAccentShape=Rectangle 0,0,#SectionAccentWidth#,#SectionAccentHeight#

; SectionTitle位置
SectionTitleX=(#PanelPaddingX#+#SectionAccentWidth#+8)
SectionTitleY=(#SectionAccentY#-#SectionTitleSize#*0.40)
; SectionTitle几何
SectionTitleSize=11.2

; Tile通用位置
TileX=(#PanelPaddingX#-2*#TileStrokeWidth#)
TileItemIconX=(#PanelPaddingX#+#TileItemIconSize#*0.25)
TileItemIconYDelta=((#TileH#-#TileItemIconSize#)*0.5)
TileItemTitleX=(#TileItemIconX#+#TileItemIconSize#*1.29)
TileItemTitleYDelta=#TileItemIconYDelta#*1.5
TileItemSubtitleX=(#TileItemTitleX#+#TileItemSubtitleSIze#*0.1)
TileItemSubtitleYDelta=(#TileItemTitleYDelta#+#TileItemTitleSize#+#TileItemSubtitleSIze#*1.1)
TileItemArrowX=(#PanelPaddingX#+#TileW#*0.95)
TileItemArrowYDelta=(#TileH#*0.5-#TileItemArrowSize#*0.84)
; Tile通用几何
TileW=(#PanelW#-2*#TileX#)
TileH=76
TileRadius=14
TileShape=Rectangle 0,0,#TileW#,#TileH#,#TileRadius#
TileStrokeWidth=1
TileBackgroundShapeDefault=#TileShape# | Fill Color #ColorNeutralBackgroundCard# | StrokeWidth #TileStrokeWidth# | Stroke Color #ColorNeutralStrokeDefault#
TileBackgroundShapeHover=#TileShape# | Fill Color #ColorNeutralBackgroundCardHover# | StrokeWidth #TileStrokeWidth# | Stroke Color #ColorBrandStroke#
TileHitboxShape=#TileShape# | Fill Color 00000001 | StrokeWidth 0
TileItemTitleSize=16
TileItemSubtitleSize=12
TileItemIconSize=(#TileH#*0.8)
TileItemArrowSize=22
; Tile分列几何
TileYSpacing=(#TileH#*0.16)
TileRowPitch=#TileH#+#TileYSpacing#
Tile1Y=#SectionAccentY#+31
Tile2Y=(#Tile1Y#+#TileRowPitch#)
Tile3Y=(#Tile2Y#+#TileRowPitch#)
Tile4Y=(#Tile3Y#+#TileRowPitch#)
Tile5Y=(#Tile4Y#+#TileRowPitch#)
Tile6Y=(#Tile5Y#+#TileRowPitch#)

; ==================================
; Footer
; ==================================
; Footer分割线形状
DividerFooterX=#PanelPaddingX#
DividerFooterY=(#Tile6Y#+#TileH#+18)
; Footer分割线几何
DividerFooterShape=Rectangle 0,0,#PanelInnerW#,#DividerHeaderHeight#

; FooterMark形状
FooterMarkX=(#PanelPaddingX#+#FooterMarkSize#*0.08)
FooterMarkY=(#DividerFooterY#+#FooterMarkSize#*0.18)
; FooterMarks几何
FooterMarkSize=(#TileItemIconSize#*1.4)

FooterNameOffsetRatio=0.14
; FooterName形状
FooterNameX=(#FooterMarkX#+#FooterMarkSize#*1.08)
FooterNameY=(#FooterMarkY#+#FooterMarkSize#*#FooterNameOffsetRatio#)
; FooterName几何
FooterNameSize=10
; FooterChineseName形状
FooterChineseX=(#FooterMarkX#+#FooterMarkSize#*1.08)
FooterChineseY=(#FooterMarkY#+#FooterMarkSize#-#FooterMarkSize#*#FooterNameOffsetRatio#)
; FooterChineseName几何
FooterNameChineseSize=(#FooterNameSize#-1)

FooterTaglineX=(#PanelW#-#PanelPaddingX#)
FooterTaglineY=(#DividerFooterY#+#FooterMarkSize#*0.09*3+#FooterTagLineSize#*1.5)
FooterTagLineSize=8

FooterCodeX=#PanelPaddingX#
FooterCodeY=(#DividerFooterY#+#FooterMarkSize#*1.09+#FooterCodeSize#*1.5)
FooterCodeSize=10

FooterBarsBrandX=(#PanelW#-#PanelPaddingX#)
FooterBarsBrandY=(#FooterCodeY#-#FooterBarsBrandSize#*0.66)
FooterBarsBrandSize=19

FooterBarsNeutralX=#FooterBarsBrandX#
FooterBarsNeutralY=#FooterBarsBrandY#
FooterBarsNeutralSize=#FooterBarsBrandSize#