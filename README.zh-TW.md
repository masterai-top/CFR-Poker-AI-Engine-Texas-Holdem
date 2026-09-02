[简体中文](README.md) | [English](README.en.md) | [繁體中文](README.zh-TW.md)

<img width="1080" height="644" alt="640 (1)" src="https://github.com/user-attachments/assets/8e39d7bd-3136-45e9-ba08-73de4c697692" />
# 多人撲克 AI 实验 | CFR-Poker-AI-Engine-Texas-Holdem

本專案聚焦多人撲克 AI 实验，保留線上現有 README 的功能、架構、截圖與使用說明，並以倉庫實際程式碼為準。

> 專案功能、效能、營運記錄與部署能力應結合目前版本獨立驗證；授權與第三方素材範圍以倉庫檔案為準。



> **全球首個1對多無限注德州AI | 可同時戰勝多個頂級職業牌手 | C++實現***

## CFR Poker AI Engine | 德州撲克CFR AI | 1對9德州撲克AI引擎



**CFR Poker AI** · **德州撲克AI** · **1對9德州AI** · **毫秒級決策**

**MasterAI 3.0 - 完整C++ CFR/MCCFR Poker AI Engine + 訓練模式**



全球首個公開的**1對9德州撲克AI引擎**。
基於 Counterfactual Regret Minimization (CFR/MCCFR) 演算法實現，支援多人自博弈訓練，可實現毫秒級即時決策。
已完成72.8億手訓練，具備較強對抗頂尖職業選手的潛力。



適合研究、二次開發或整合到德州撲克平台中使用。



[立即聯絡以取得完整訓練模型、技術文件與商用授權](#聯絡我們)



## ✨ 核心突破



- 支援 **1v1 至 1v9** 多人德州撲克AI

- 決策速度：**6-10 毫秒/步**

- 訓練規模：72.8億手自博弈，19,255,000 次迭代

- 採用 CFR + MCCFR + 抽象賽局樹 + 對手建模

- 提供完整C++原始碼 + 已訓練策略模型

[![Contact](https://img.shields.io/badge/联系-TG%3A%40xuzongbin001-blue)](https://t.me/xuzongbin001)

[![Python](https://img.shields.io/badge/C%2B%2B-11-blue.svg)](https://isocpp.org/)

[![Stars](https://img.shields.io/github/stars/masterai-top/Texas-Hold-em-Poker-AI?style=social)](https://github.com/masterai-top/Texas-Hold-em-Poker-AI)



🔥 Game Theory Poker AI System

👉 CFR / MCCFR / Strategy Engine / Opponent Modeling



---



## 🧠 Project Overview



This is a Texas Hold’em Poker AI engine.

本項目是一套德州撲克AI決策引擎系統。



Built using game theory and regret minimization techniques.



## 🏆 核心突破 | Breakthrough



MasterAI 3.0 是Master AI團隊研發的**1對多德州撲克AI**，支援1v1、1v2、1v3、1v6、1v9。
一個AI可同時與多個頂級牌手對戰。



| 指標 | 數據 |

| :--- | :--- |

| **對戰模式** | 1v1 ~ 1v9 |

| **決策速度** | 6-10毫秒/步 |

| **訓練時間** | 15天 |

| **訓練算力** | 256核心 + 2TB記憶體 |

| **訓練局數** | 72.8億手 |

| **模型數量** | 99個 |



## 🧠 核心技術 | Technology



| 技術模組 | 說明 |

| :--- | :--- |

| **深度有限搜尋V1.0** | 決策樹深度n，四張藍圖求期望 |

| **深度有限搜尋V2.0** | 有限迭代訓練，達到納許均衡 |

| **多人CFR演算法** | 反事實遺憾最小化，多人擴充 |

| **藍圖搜尋最佳化** | FOLD/CALL/RAISE/DEFAULT四藍圖 |

| **策略即時訓練** | 毫秒級決策最佳化 |



## 🎯 訓練資料 | Training



| 參數 | 配置 |

| :--- | :--- |

| 處理器 | 2 × 128 Cores |

| 記憶體 | 2TB |

| 硬碟 | 4TB |

| 訓練時間 | 15天 |

| 模型數 | 99個 |

| 迭代次數 | 19,255,000 |

| 遊戲局數 | 7,284,283,624 |



## 📁 程式碼結構

├── Pluribus.cpp/hpp # Pluribus演算法核心

├── State.cpp/hpp # 遊戲狀態搜索

├── Trainer.cpp/hpp # 訓練器

├── GamePool.cpp/hpp # 遊戲池管理

├── InfoNode.cpp/hpp # 資訊節點

├── NumPy.cpp/hpp # 數值計算

├── TaskExecutor.cpp/hpp # 任務執行

└── Configure.cpp/hpp # 設定管理





## 📸 技術架構



| 演算法流程圖 | 訓練曲線 | 對戰效果 |

| :---: | :---: | :---: |
<img width="379" alt="微信图片_20241030112757" src="https://github.com/user-attachments/assets/c803f6ea-1ab9-4bb7-b2d7-2ca85cc13418">
## 💰 取得原始碼



✅ 完整C++ AI源碼

✅ 訓練好的模型文件

✅ 訓練腳本

✅ 部署文檔



📱 **Telegram：@xuzongbin001**

📧 **Email：masterai918@gmail.com**



👉 **聯絡我以取得簡報 + 詳細報價**



---



⭐ Star 這個倉庫，支持世界級德州AI持續進化！



## ⚙️ Core AI Concepts



- Counterfactual Regret Minimization (CFR)

- Monte Carlo CFR (MCCFR)

- Strategy optimization

- Nash equilibrium approximation

- Opponent modeling (optional)



---



## 🧠 System Architecture



Game Tree → Information Sets → Regret Calculation → Strategy Update → Action Selection



---



## 🎮 Features



- Poker decision engine

- Strategy computation system

- Self-play training loop

- Exploitability evaluation

- Real-time action inference



---



## 📊 AI Workflow



1. Build game tree abstraction

2. Compute regret values

3. Update strategy profile

4. Iterate self-play

5. Converge toward equilibrium strategy



---



## 🏆 Use Cases



- Poker AI research

- Game theory experiments

- Reinforcement learning benchmarks

- AI agent training environments

- ## 🚀 Quick Start





git clone xxx

cd project

pip install -r requirements.txt

python main.py







## MasterAI-3.0-1VS9-NoLimit 德州一對多無限制AI

MasterAI-3.0 是Master AI 團隊研發出來的1對多的AI，1對1,1對2,1對3，1對6，1對9。1個高度智能化具有自我學習的AI可以戰勝多個中級高級，在線測試驗證，多個國內外頂級牌手在一個牌局中在3000手內很難戰勝Master 3.0；

(一)藍圖演算法

1.深度有限搜尋演算法V1.0

1)演算法思路

採用深度為n的決策樹進行訓練模型，超過深度n以外的節點採用四張藍圖（F OLD、CHECK/CALL，RAISE，DEFAULT）求平均期望得結果，此過程當前玩家採用1326套手牌隨機採樣一套為自己，對手採用隨機發一套手牌的方式，不斷迭代更新策略。

2.深度有限搜尋演算法V2.0

1)演算法思路

在當階決策樹（樹深度為n）採用有限次數的迭代訓練，超過此階自己採用四張藍圖（F OLD、CHECK/CALL，RAISE，DEFAULT）進行遊戲，對手採用隨機策略，不斷迭代更新，使其達到納許均衡



(二)模型訓練

1.訓練原因

模型訓練牌局結算資料問題修正（某些遊戲狀態下，遊戲結算訓練資料有髒值）

2.訓練參數



3.訓練環境

處理器：2 * 128 Cores

記憶體大小：2TB

硬碟大小：4TB

4.訓練時長

訓練時間：15DAYS

模型數量：99PCS

迭代數量：19255000

遊戲局數：7284283624



(三)演算法最佳化

1.多人CFR演算法改進(v2)

2、模型V2訓練

3.新版搜尋藍圖改進驗證(v2)

4.新牌搜尋藍圖改進與優化

（1）預設藍圖

（2）FOLD藍圖

（3）CALL藍圖

（4）RAISE藍圖

5.多人CFR演算法改進（策略即時訓練時間）

6.搜尋時長優化（1第多的AI決策在6毫秒~10毫秒）





對Master AI 3.0訓練模型和AI演算法有興趣或有意購買AI原始碼合作者，可以聯絡 Telegram:@xuzongbin001

