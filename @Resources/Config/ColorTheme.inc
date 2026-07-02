[Variables]
; ==================================
; 前景色：文字、图标、符号与其他内容性元素共用。
; 此处只定义稳定的颜色角色。
; ==================================

; 中性前景色。

; 主要内容前景。
; 用于标题、正文、主要数值、主要图标，以及交互后需要提升为最高强调级的内容。
ColorNeutralForegroundPrimary=#Neutral800#

; 次级内容前景。
; 用于副标题、说明、一般信息、非主操作，以及空闲状态下的次级文字操作。
ColorNeutralForegroundSecondary=#Neutral500#

; 三级内容前景。
; 用于时间、路径、来源、元数据、弱图标等不应争夺阅读注意力的信息。
ColorNeutralForegroundTertiary=#Neutral400#

; 极弱内容前景。
; 用于 Placeholder、极弱提示、装饰性辅助信息等。
; 不建议用于承载关键内容或主要可操作入口。
ColorNeutralForegroundSubtle=#Neutral300#

; 位于品牌色背景上的前景。
ColorNeutralForegroundOnBrand=#Neutral800#

; 位于反色表面上的前景。
ColorNeutralForegroundInverted=#Neutral000#

; 禁用内容前景。
; 用于禁用文本、禁用图标及其他不可交互内容。
ColorNeutralForegroundDisabled=#Neutral300#

; 品牌前景色。
; 用于需要表达品牌归属、选中态或强调性的文本、图标与符号。

; 常规品牌前景。
; 用于品牌强调图标、选中项文字、轻度品牌强调内容。
ColorBrandForeground=#Brand500#

; 强品牌前景。
; 用于需要更高对比度、更强视觉强调的品牌文字、图标或关键数值。
ColorBrandForegroundStrong=#Brand600#

; 链接前景色。
; Link 是跨组件通用且具有明确交互语义的元素且过于通用，因此单独保留状态色。

; 主要链接的默认与 Selected 状态。
; 用于正文链接、可跳转文本及其他明确的导航性操作。
ColorForegroundLink=#Brand500#
; 主要链接的 Hover 状态。
ColorForegroundLinkHover=#Brand600#
; 主要链接的 Pressed 状态。
ColorForegroundLinkPressed=#Brand400#

; 次要链接的默认与 Selected 状态。
; 用于次要链接、非关键跳转文本及其他弱导航性操作。
ColorForegroundLinkSecondary=#Neutral500#
; 次要链接的 Hover 状态。
ColorForegroundLinkSecondaryHover=#Neutral700#
; 次要链接的 Pressed 状态。
ColorForegroundLinkSecondaryPressed=#Neutral600#

; ==================================
; 背景色：承载画布、表面、容器、交互填充与遮罩。
; 背景色Token按材质与用途命名。
; ==================================

; 根画布。
; 用于整个 Skin、主窗口区域或最外层内容背景。
ColorNeutralBackgroundCanvas=#Neutral000AlphaE2#

; 常规中性填充。
; 用于默认可见的中性按钮、列表项、、带背景的工具项、输入区域等填充型表面等。
ColorNeutralBackgroundPrimary=#Neutral200#
ColorNeutralBackgroundPrimaryHover=#Neutral300#
ColorNeutralBackgroundPrimaryPressed=#Neutral100#
ColorNeutralBackgroundPrimarySelected=#Neutral300#

; 低强调中性填充。
; 用于低强调的中性按钮、列表项、输入区域等填充型表面等。
ColorNeutralBackgroundSubtle=#Neutral100#
ColorNeutralBackgroundSubtleHover=#Neutral200#
ColorNeutralBackgroundSubtlePressed=#Neutral000#
ColorNeutralBackgroundSubtleSelected=#Neutral200#

; 卡片 / 瓦片表面。
; 用于 Tile、信息卡、可点击面板、设置项、独立内容块等。
; 与主画布及一般中性填充保持独立，以便日后调整层级。
ColorNeutralBackgroundCard=#Neutral100AlphaC2#
ColorNeutralBackgroundCardHover=#Neutral200Alpha82#
ColorNeutralBackgroundCardPressed=#Neutral000#
ColorNeutralBackgroundCardSelected=#Neutral200#

; 内凹或低层表面。
; 用于输入区域内层、分组底板、内容槽、密集列表底色等。
ColorNeutralBackgroundSunken=#Neutral000#

; 禁用表面。
ColorNeutralBackgroundDisabled=#Neutral100#

; 反色环境表面。
; 用于反色提示块、反色浮层、反色容器等。
ColorNeutralBackgroundInverted=#Neutral700#

; 固定表面。
; 用于不应随宿主明暗关系反转的特殊区域。
ColorNeutralBackgroundStatic=#Neutral200#

; 透明背景。
; 用于完全不应产生背景填充的元素。
ColorTransparentBackground=#Transparent#

; 常规品牌填充。
; 用于主按钮、关键确认操作、品牌强调控件。
ColorBrandBackground=#Brand300#
ColorBrandBackgroundHover=#Brand300Soft#
ColorBrandBackgroundPressed=#Brand200#
ColorBrandBackgroundSelected=#Brand200Soft#

; 柔和品牌填充。
; 用于低强调品牌选中态、品牌提示底色、轻量品牌容器。
ColorBrandBackgroundSubtle=#Brand200Soft#
ColorBrandBackgroundSubtleHover=#Brand300Soft#
ColorBrandBackgroundSubtlePressed=#Brand200#
ColorBrandBackgroundSubtleSelected=#Brand300Soft#

; 固定品牌表面。
ColorBrandBackgroundStatic=#Brand400#

; 反色品牌表面。
; 用于强品牌或反色环境中的品牌操作。
; 此组应配合 ColorNeutralForegroundInverted 使用。
ColorBrandBackgroundInverted=#Neutral800#
ColorBrandBackgroundInvertedHover=#Brand800Soft#
ColorBrandBackgroundInvertedPressed=#Brand700Soft#
ColorBrandBackgroundInvertedSelected=#Brand800Soft#

; ==================================
; Stencil：低强调图形、占位形状与装饰性底图。
; 不用于普通容器、卡片或可交互背景。
; ==================================

; 常规 Stencil。
; 适用于可见但不抢眼的空状态图形、骨架块、图表辅助形状等。
ColorNeutralStencilPrimary=#Neutral300#

; 更轻的 Stencil。
; 适用于大面积装饰底图、极弱几何元素等。
ColorNeutralStencilSecondary=#Neutral200#

; ==================================
; Stroke：边框、轮廓与分隔线。
; ==================================

; 中性描边

; 可访问性描边。
; 用于需要较明确边界的输入控件、可选项、重要轮廓等。
; Selected 时进入品牌描边。
ColorNeutralStrokeAccessible=#Neutral400#
ColorNeutralStrokeAccessibleHover=#Neutral500#
ColorNeutralStrokeAccessiblePressed=#Neutral400#
ColorNeutralStrokeAccessibleSelected=#ColorBrandStroke#

; 常规中性描边。
; 用于普通按钮、输入框、卡片、列表项等默认边界。
ColorNeutralStrokeDefault=#Neutral300#
ColorNeutralStrokeDefaultHover=#Neutral400#
ColorNeutralStrokeDefaultPressed=#Neutral200#
ColorNeutralStrokeDefaultSelected=#Neutral400#

; 次级中性描边。
; 用于较低强调的容器边缘、普通分隔关系等。
ColorNeutralStrokeSecondary=#Neutral200#

; 三级中性描边。
; 用于更弱的分隔线、密集区域中的结构边界等。
ColorNeutralStrokeTertiary=#Neutral200#

; 微弱中性描边。
; 用于极弱容器轮廓、暗色面板内侧边缘、非关键分组边界等。
ColorNeutralStrokeSubtle=#Neutral000Alpha2E#

; 禁用描边。
; 用于禁用控件的主要边界。
ColorNeutralStrokeDisabled=#Neutral200#

; 极弱禁用描边。
; 用于禁用卡片、禁用次级容器或不应显眼的禁用边界。
ColorNeutralStrokeDisabledSubtle=#Neutral100#

; 位于品牌填充上的常规描边。
ColorNeutralStrokeOnBrand=#Neutral800#

; 位于品牌填充上的强描边。
; 用于需要在品牌表面上保持明显轮廓的元素。
ColorNeutralStrokeOnBrandStrong=#Neutral800#
ColorNeutralStrokeOnBrandStrongHover=#Neutral800#
ColorNeutralStrokeOnBrandStrongPressed=#Neutral800#
ColorNeutralStrokeOnBrandStrongSelected=#Neutral800#

; 透明描边。
; 用于明确不应绘制边框的外观。
ColorTransparentStroke=#Transparent#

; 透明禁用描边。
; 禁用状态下明确不画边框。
ColorTransparentStrokeDisabled=#Transparent#

; 品牌描边

; 常规品牌描边。
; 用于选中边框、品牌强调轮廓、激活状态边界等。
ColorBrandStroke=#Brand500#

; 柔和品牌描边。
; 用于浅品牌背景、低强调品牌容器、轻量选中边界等。
ColorBrandStrokeSubtle=#Brand300Soft#
ColorBrandStrokeSubtleHover=#Brand400Soft#
ColorBrandStrokeSubtlePressed=#Brand200Soft#
ColorBrandStrokeSubtleSelected=#Brand300Soft#

; ==================================
; Focus：键盘焦点指示器。
; 必须以双层描边成对使用。
; 不作为普通 Hover、Selected 或 Card Border 使用。
; 在 Rainmeter 组件中禁用，组件不需要键盘焦点指示器。
; ==================================

;ColorStrokeFocus1=
;ColorStrokeFocus2=

; ==================================
; 遮罩/覆盖层
; ==================================

; 模态遮罩。
; 用于 Dialog、Popup、阻断式状态下压暗底层界面。
ColorBackgroundOverlay=#Neutral000#80

; 滚动条覆盖层。
ColorScrollbarOverlay=#Neutral000#99









