<img width="1080" height="644" alt="640 (1)" src="https://github.com/user-attachments/assets/8e39d7bd-3136-45e9-ba08-73de4c697692" />

# 🧠 MasterAI 3.0 | 1对9德州扑克AI | 毫秒级决策 | 完整源码+训练模型|Texas Hold’em Poker AI Engine | 扑克AI引擎 | CFR策略系统|CFR Poker AI Engine | 德州扑克CFR AI | 1对9德州扑克AI引擎

> **全球首个1对多无限注德州AI | 可同时战胜多个顶级职业牌手 | C++实现**
# CFR Poker AI Engine | 德州扑克CFR AI | 1对9德州扑克AI引擎

**CFR Poker AI** · **德州扑克AI** · **1对9德州AI** · **毫秒级决策**  
**MasterAI 3.0 - 完整C++ CFR/MCCFR Poker AI Engine + 训练模型**

全球首个公开的**1对9德州扑克AI引擎**。基于 Counterfactual Regret Minimization (CFR/MCCFR) 算法实现，支持多人自博弈训练，可实现毫秒级实时决策。已完成72.8亿手训练，具备较强对抗顶级职业选手的潜力。

适合研究、二次开发或集成到德州扑克平台中使用。

[立即联系获取完整训练模型、技术文档与商用授权](#联系我们)

## ✨ 核心突破

- 支持 **1v1 至 1v9** 多人德州扑克AI
- 决策速度：**6-10 毫秒/步**
- 训练规模：72.8亿手自博弈，19,255,000 次迭代
- 采用 CFR + MCCFR + 抽象博弈树 + 对手建模
- 提供完整C++源码 + 已训练策略模型
[![Contact](https://img.shields.io/badge/联系-TG%3A%40xuzongbin001-blue)](https://t.me/xuzongbin001)
[![Python](https://img.shields.io/badge/C%2B%2B-11-blue.svg)](https://isocpp.org/)
[![Stars](https://img.shields.io/github/stars/masterai-top/Texas-Hold-em-Poker-AI?style=social)](https://github.com/masterai-top/Texas-Hold-em-Poker-AI)

🔥 Game Theory Poker AI System  
👉 CFR / MCCFR / Strategy Engine / Opponent Modeling  

---

## 🧠 Project Overview

This is a Texas Hold’em Poker AI engine.  
本项目是一套德州扑克AI决策引擎系统。

Built using game theory and regret minimization techniques.

## 🏆 核心突破 | Breakthrough

MasterAI 3.0 是Master AI团队研发的**1对多德州扑克AI**，支持1v1、1v2、1v3、1v6、1v9。一个AI可同时与多个顶级牌手对战。

| 指标 | 数据 |
| :--- | :--- |
| **对战模式** | 1v1 ~ 1v9 |
| **决策速度** | 6-10毫秒/步 |
| **训练时长** | 15天 |
| **训练算力** | 256核心 + 2TB内存 |
| **训练局数** | 72.8亿手 |
| **模型数量** | 99个 |

## 🧠 核心技术 | Technology

| 技术模块 | 说明 |
| :--- | :--- |
| **深度有限搜索V1.0** | 决策树深度n，四张蓝图求期望 |
| **深度有限搜索V2.0** | 有限迭代训练，达到纳什均衡 |
| **多人CFR算法** | 反事实遗憾最小化，多人扩展 |
| **蓝图搜索优化** | FOLD/CALL/RAISE/DEFAULT四蓝图 |
| **策略实时训练** | 毫秒级决策优化 |

## 🎯 训练数据 | Training

| 参数 | 配置 |
| :--- | :--- |
| 处理器 | 2 × 128 Cores |
| 内存 | 2TB |
| 硬盘 | 4TB |
| 训练时间 | 15天 |
| 模型数量 | 99个 |
| 迭代次数 | 19,255,000 |
| 游戏局数 | 7,284,283,624 |

## 📁 代码结构
├── Pluribus.cpp/hpp # Pluribus算法核心
├── State.cpp/hpp # 游戏状态搜索
├── Trainer.cpp/hpp # 训练器
├── GamePool.cpp/hpp # 游戏池管理
├── InfoNode.cpp/hpp # 信息节点
├── NumPy.cpp/hpp # 数值计算
├── TaskExecutor.cpp/hpp # 任务执行
└── Configure.cpp/hpp # 配置管理


## 📸 技术架构

| 算法流程图 | 训练曲线 | 对战效果 |
| :---: | :---: | :---: |
<img width="379" alt="微信图片_20241030112757" src="https://github.com/user-attachments/assets/c803f6ea-1ab9-4bb7-b2d7-2ca85cc13418">



## 💰 获取源码

✅ 完整C++ AI源码  
✅ 训练好的模型文件  
✅ 训练脚本  
✅ 部署文档  

📱 **Telegram：@xuzongbin001**  
📧 **Email：masterai918@gmail.com**

👉 **联系我获取演示 + 详细报价**

---

⭐ Star 这个仓库，支持世界级德州AI持续进化！

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



# MasterAI-3.0-1VS9-NoLimit  德州一对多无限制AI
MasterAI-3.0 是Master AI 团队研发出来的1对多的AI，1对1,1对2,1对3，1对6，1对9。1个高度智能化具有自我学习的AI可以战胜多个中级高级，在线测试验证，多个国内外顶级牌手在一个牌局中在3000手内很难战胜Master AI 3.0；
(一)蓝图算法
1.深度有限搜索算法V1.0
1)算法思路
采用深度为n的决策树进行训练模型，超过深度n之外的节点采用四张蓝图（F OLD、CHECK/CALL，RAISE，DEFAULT）求平均期望得结果，此过程当前玩家采用1326套手牌随机采样一套为自己，对手采用随机发一套手牌的方式，不断迭代更新策略。
2.深度有限搜索算法V2.0
1)算法思路
在当阶决策树（树深度为n）采用有限次数的迭代训练，超过此阶自己采用四张蓝图（F OLD、CHECK/CALL，RAISE，DEFAULT）进行游戏，对手采用随机策略，不断迭代更新，使其达到纳什均衡

(二)模型训练
1.训练原因
模型训练牌局结算数据问题修正（某些游戏状态下，游戏结算训练数据有脏值）
2.训练参数

3.训练环境
处理器：2 * 128 Cores 
内存大小：2TB
硬盘大小：4TB
4.训练时长
训练时间：15DAYS
模型数量：99PCS
迭代数量：19255000
游戏局数：7284283624

(三)算法优化
1、多人CFR算法改进(v2)
2、模型V2训练
3、新版搜索蓝图改进验证(v2)
4、新牌搜索蓝图改进与优化
（1）默认蓝图
（2）FOLD蓝图
（3）CALL蓝图
（4）RAISE蓝图
5、多人CFR算法改进（策略实时训练时间）
6、搜索时长优化（1第多的AI决策在6毫秒~10毫秒）


对Master AI 3.0训练模型和AI算法感兴趣或者有意购买AI源代码合作者，可以联系 Telegram:@xuzongbin001
