# 多人德州撲克 CFR AI 引擎 | C++ 自我博弈與策略研究

[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md) | [專案網站](https://masterai-top.github.io/CFR-Poker-AI-Engine-Texas-Holdem/zh-tw/)

![多人德州撲克 AI 對局畫面](Screenshots/微信图片_20241030103018.jpg)

這是一套面向 **多人無限注德州撲克** 的 C++ CFR AI 引擎。專案涵蓋反事實遺憾最小化（CFR/MCCFR）、多人自我博弈、資訊集、動作抽象、策略儲存與即時決策，適合撲克博弈研究、AI 策略實驗與伺服器整合評估。

> 本倉庫聚焦「多人 CFR 策略引擎」，不與單挑 HUNL 求解器或一般德州撲克平台使用相同定位。專案資料中的訓練規模與延遲數值，仍需在指定硬體與設定下獨立驗證。

## 主要功能

| 模組 | 說明 |
|---|---|
| 多人牌局狀態 | 座位、籌碼、公共牌、下注輪、合法動作與終局結算 |
| CFR / MCCFR | 資訊集遺憾值、平均策略、自我博弈迭代與收斂研究 |
| 抽象系統 | Fold、Check/Call、Raise 動作與手牌/公共牌聚類 |
| 訓練流程 | 多任務排程、參數設定、模型序列化、載入與記錄 |
| 決策引擎 | 依目前牌局狀態讀取策略並輸出動作 |
| C++ 整合 | 核心原始碼、設定欄位、Redis 介面與 Visual Studio 資料 |

## 玩法與策略流程

引擎處理完整德州撲克決策循環：建立私牌與公共牌資訊集、生成合法動作、依平均策略抽樣，並把終局收益回寫至遺憾值和策略更新。多人牌局還涉及位置、有效籌碼、行動順序及多名對手帶來的狀態擴張。

```text
牌局狀態 -> 資訊集/抽象 -> 合法動作 -> CFR 策略抽樣
        -> Fold / Call / Raise -> 終局收益 -> 遺憾與平均策略更新
```

## 技術結構

- `Pluribus`：多人策略與搜尋核心
- `State`：牌局狀態、動作推進及收益
- `Trainer`：自我博弈訓練與迭代
- `InfoNode`：資訊集、遺憾值與平均策略
- `GamePool`、`TaskExecutor`：並行牌局和任務排程
- `CardAbst`、`CardCluster`：牌力和狀態抽象
- `Configure`：訓練、模型及執行參數

![CFR 訓練與執行參數](Screenshots/微信图片_20241030112757.png)

## 適用情境

- 多人德州撲克 AI 與不完全資訊博弈研究
- CFR/MCCFR、自我博弈及納什均衡近似實驗
- C++ 撲克機器人策略模組和伺服器介面驗證
- 抽象、剪枝、採樣與對手建模方法比較
- 模型離線回放、基準測試與可重現研究
- 作為德州輔助軟體的離線策略研究元件，而非即時對局作弊工具

## 使用提醒

部署前應審查授權和第三方元件、固定建置依賴，並以可重現基準驗證效能。請勿用於違反所在地法律、服務條款或公平競技規則的用途。

## 延伸頁面

- [多人 CFR 德州 AI 繁體專頁](https://masterai-top.github.io/CFR-Poker-AI-Engine-Texas-Holdem/zh-tw/)
- [簡體中文](https://masterai-top.github.io/CFR-Poker-AI-Engine-Texas-Holdem/zh-cn/)
- [English](https://masterai-top.github.io/CFR-Poker-AI-Engine-Texas-Holdem/en/)
