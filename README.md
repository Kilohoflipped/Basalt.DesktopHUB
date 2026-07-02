<div align="center">
  <img src="@Resources/Assets/Logos/Star.png" width="252" alt="Basalt Desktop HUB 标识">

  <h1>Basalt.DesktopHUB</h1>

  <p>
    一座安静驻留于 Windows 桌面的本地访问终端。<br>
    用模块化 Rainmeter 皮肤组织时间、状态与六组常用入口。
  </p>

  <p>
    <img alt="Rainmeter" src="https://img.shields.io/badge/Rainmeter-Skin-1F2328?style=flat-square">
    <img alt="Version" src="https://img.shields.io/badge/version-1.0.1-FF6022?style=flat-square">
    <img alt="Platform" src="https://img.shields.io/badge/platform-Windows-0078D4?style=flat-square">
    <img alt="Git LFS" src="https://img.shields.io/badge/assets-Git%20LFS-F05032?style=flat-square">
  </p>
</div>

---

## 关于

**Basalt.DesktopHUB** 是一款纵向布局的 Rainmeter 桌面面板，视觉语言取材于本地终端、导航节点与信息控制台。它将日期时间、节点标识、快捷访问卡片和品牌页脚组合在一个半透明面板中。

当前版本提供六组快捷入口：

<table>
  <tr>
    <td align="center"><img src="@Resources/Assets/Icons/WorkSpace.png" width="72" alt="工作区"><br><b>工作区</b><br><sub>Workspace</sub></td>
    <td align="center"><img src="@Resources/Assets/Icons/Inbox.png" width="72" alt="收件箱"><br><b>收件箱</b><br><sub>Inbox</sub></td>
    <td align="center"><img src="@Resources/Assets/Icons/Academics.png" width="72" alt="学业"><br><b>学业</b><br><sub>Academics</sub></td>
    <td align="center"><img src="@Resources/Assets/Icons/Studio.png" width="72" alt="创作"><br><b>创作</b><br><sub>Studio</sub></td>
    <td align="center"><img src="@Resources/Assets/Icons/Personal.png" width="72" alt="个人"><br><b>个人</b><br><sub>Personal</sub></td>
    <td align="center"><img src="@Resources/Assets/Icons/Vault.png" width="72" alt="保管库"><br><b>保管库</b><br><sub>Vault</sub></td>
  </tr>
</table>

## 特性

- 模块化拆分页眉、快捷访问区、六张访问卡片与页脚
- 同时显示中文日期、英文日期、时间和星期信息
- 使用统一的色彩令牌、字体主题、布局变量和 `MeterStyle`
- 半透明画布与卡片表面，支持悬停描边和背景反馈
- 通过 `explorer.exe` 显式打开文件夹或 Windows Library
- 快捷入口标题、图标、路径和文案均可独立配置
- 图片资源通过 Git LFS 管理

## 安装

### 前置条件

- Windows
- [Rainmeter](https://www.rainmeter.net/)
- [Git LFS](https://git-lfs.com/)（通过 Git 克隆时需要）

### 使用 Git 克隆

在 Rainmeter 的 `Skins` 目录中执行：

```powershell
git lfs install
git clone https://github.com/Kilohoflipped/Basalt.DesktopHUB.git
```

默认位置通常为：

```text
%USERPROFILE%\Documents\Rainmeter\Skins\Basalt.DesktopHUB
```

然后：

1. 打开 Rainmeter 管理器并点击“刷新全部”
2. 展开 `Basalt.DesktopHUB\Basalt.HUB.Desk`
3. 加载 `Basalt.HUB.Desk.ini`

## 配置快捷入口

快捷入口集中定义在：

```text
@Resources\Widgets\Basalt.HUB.Desk\Strings.inc
```

每个入口由标题、副标题、图标、箭头和路径组成：

```ini
Item1Title=工作区
Item1Subtitle=Workspace
Item1Icon=Icons\Workspace.png
Item1Arrow=›
Item1Path=C:\Path\To\Your\Folder
```

> [!IMPORTANT]
> 仓库中的部分 `ItemNPath` 是开发者计算机上的绝对路径，另一些暂时为空。首次使用时请将它们改成你自己的文件夹、文件或 `.library-ms` 路径。

访问卡片使用以下动作显式调用资源管理器：

```ini
LeftMouseUpAction=["explorer.exe" "#Item1Path#"]
```

这也适用于 Windows Library，例如：

```ini
Item1Path=C:\Users\YourName\AppData\Roaming\Microsoft\Windows\Libraries\Workspace.library-ms
```

## 字体

当前字体主题位于 `@Resources\Config\FontTheme.inc`，默认引用：

| 用途 | 字体 |
|---|---|
| 中文与常规界面 | HarmonyOS Sans SC |
| 标题与数字 | D-DIN |
| 等宽信息 | JetBrains Mono |
| 节点标识 | Octin College |

这些字体没有随仓库分发。若本机未安装，请安装对应字体，或直接将 `FontTheme.inc` 中的字体名称替换为本机已有字体。

## 自定义

<details>
<summary><b>调整颜色与透明度</b></summary>

基础色板位于：

```text
@Resources\Config\Color.inc
```

语义颜色映射位于：

```text
@Resources\Config\ColorTheme.inc
@Resources\Config\ColorInteraction.inc
@Resources\Config\ColorElevation.inc
```

带透明度的十六进制颜色采用 `RRGGBBAA` 格式，例如：

```ini
Neutral000AlphaE2=090A0BE2
```

</details>

<details>
<summary><b>调整尺寸与位置</b></summary>

面板尺寸、间距、卡片位置和字号集中定义在：

```text
@Resources\Widgets\Basalt.HUB.Desk\Layout.inc
```

主皮肤的窗口位置由 `PanelX` 与 `PanelY` 控制，卡片则通过 `Tile1Y` 至 `Tile6Y` 依次排列。

</details>

<details>
<summary><b>替换图标与品牌标识</b></summary>

资源目录为：

```text
@Resources\Assets\Icons
@Resources\Assets\Logos
```

图标文件名可在组件字符串表中修改。路径以 `@Resources\Assets` 为基准，不需要写绝对路径。

</details>

## 项目结构

```text
Basalt.DesktopHUB/
├─ Basalt.HUB.Desk/
│  └─ Basalt.HUB.Desk.ini          # Rainmeter 入口
├─ @Resources/
│  ├─ Assets/
│  │  ├─ Icons/                    # 快捷访问图标
│  │  └─ Logos/                    # 品牌标识
│  ├─ Config/
│  │  ├─ Color.inc                 # 基础色板
│  │  ├─ ColorTheme.inc            # 语义色彩
│  │  ├─ FontTheme.inc             # 字体主题
│  │  ├─ Strings.inc               # 全局字符串映射
│  │  └─ Styles.inc                # 全局 MeterStyle
│  ├─ Core/
│  │  └─ Measures.inc              # 时间与日期度量
│  └─ Widgets/Basalt.HUB.Desk/
│     ├─ Layout.inc                # 面板布局
│     ├─ Strings.inc               # 组件文案与路径
│     ├─ Styles.inc                # 卡片样式
│     └─ Modules/
│        ├─ Header.inc
│        ├─ QuickAccess.inc
│        ├─ AccessItems/            # 六组访问卡片
│        └─ Footer.inc
├─ .gitattributes                  # 编码、换行与 LFS 规则
└─ .gitignore
```

## 编码约定

- 两个 `Strings.inc` 使用 **UTF-16 LE with BOM**，用于可靠保存中文文本
- 其他 `.ini` 与 `.inc` 文件作为普通文本管理
- Rainmeter 配置文件在工作区使用 CRLF
- PNG、字体、归档和 `.rmskin` 文件由 Git LFS 管理

编辑字符串表时，请确认编辑器没有擅自把文件转换成无 BOM 的 UTF-8。

## 开发状态

当前版本：**1.0.1**

项目目前以个人桌面工作流为核心，快捷入口路径需要按使用者环境配置。欢迎通过 Issue 提交问题或建议。

<div align="center">
  <br>
  <img src="@Resources/Assets/Logos/Main.png" width="96" alt="StarTrack Confederation">
  <p><sub>We Chart The PATH. We Build The Future. We Are One.</sub></p>
</div>
