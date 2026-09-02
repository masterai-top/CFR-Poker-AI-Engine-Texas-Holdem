[简体中文](README.md) | [English](README.en.md) | [繁體中文](README.zh-TW.md)

<img width="1080" height="644" alt="640 (1)" src="https://github.com/user-attachments/assets/8e39d7bd-3136-45e9-ba08-73de4c697692" />
# CFR-Poker-AI-Engine-Texas-Holdem

CFR-based Texas Hold'em AI engine for multi-player strategy research and reproducible evaluation in C++. This document preserves the project's existing features, architecture, screenshots and usage notes; the repository contents remain authoritative.

> Validate features, performance, operational history and deployment requirements against the current version. License and third-party asset terms are defined by repository files.


> **World's first 1-vs-many No-Limit Texas Hold’em AI | Capable of defeating multiple top-tier professional players simultaneously | Implemented in C++**
## CFR Poker AI Engine | Texas Hold’em CFR AI | 1-vs-9 Texas Hold’em AI Engine


**CFR Poker AI** · **Texas Hold’em AI** · **1-vs-9 Texas Hold’em AI** · **Millisecond-level decision making**
**MasterAI 3.0 - Complete C++ CFR/MCCFR Poker AI Engine + Trained Model**


The project-described publicly available **1-vs-9 Texas Hold’em AI engine**.
Implemented using the Counterfactual Regret Minimization (CFR/MCCFR) algorithm, it supports multi-player self-play training and enables real-time decision-making within milliseconds.
Having undergone training on 7.28 billion hands, it possesses the potential to compete strongly against top-tier professional players.



Suitable for research, secondary development, or integration into Texas Hold’em platforms.
[Contact us now to obtain the complete trained model, technical documentation, and commercial license](#Contact-Us)


## ✨ Key Breakthroughs


- Supports **1v1 to 1v9** multiplayer Texas Hold’em AI
- Decision speed: **6–10 ms/step**
- Training scale: 7.28 billion self-play hands, 19,255,000 iterations
- Utilizes CFR + MCCFR + Game Tree Abstraction + Opponent Modeling
- Includes complete C++ source code + trained strategy models
[![Contact](https://img.shields.io/badge/联系-TG%3A%40xuzongbin001-blue)](https://t.me/xuzongbin001)
[![Python](https://img.shields.io/badge/C%2B%2B-11-blue.svg)](https://isocpp.org/)
[![Stars](https://img.shields.io/github/stars/masterai-top/Texas-Hold-em-Poker-AI?style=social)](https://github.com/masterai-top/Texas-Hold-em-Poker-AI)


🔥 Game Theory Poker AI System
👉 CFR / MCCFR / Strategy Engine / Opponent Modeling


---


## 🧠 Project Overview


This is a Texas Hold’em Poker AI decision engine system.



Built using game theory and regret minimization techniques.


## 🏆 Key Breakthroughs


MasterAI 3.0 is a **1-vs-Many Texas Hold’em AI** developed by the Master AI team, supporting 1v1, 1v2, 1v3, 1v6, and 1v9 configurations.
A single AI instance can compete against multiple top-tier players simultaneously.
| Metric | Data |
| :--- | :--- |
| **Match Format** | 1v1 ~ 1v9 |
| **Decision Speed** | 6–10 ms/step |
| **Training Duration** | 15 days |
| **Training Compute** | 256 cores + 2TB RAM |
| **Training Hands** | 7.28 billion |
| **Number of Models** | 99 |


## 🧠 Core Technology | Technology


| Technology Module | Description |
| :--- | :--- |
| **Depth-Limited Search V1.0** | Decision tree depth *n*; expectation calculation using four blueprints |
| **Depth-Limited Search V2.0** | Finite iterative training to achieve Nash Equilibrium |
| **Multi-player CFR Algorithm** | Counterfactual Regret Minimization; multi-player extension |
| **Blueprint Search Optimization** | Four blueprints: FOLD/CALL/RAISE/DEFAULT |
| **Real-time Strategy Training** | Millisecond-level decision optimization |


## 🎯 Training Data | Training


| Parameter | Configuration |
| :--- | :--- |
| Processor | 2 × 128 Cores |
| RAM | 2TB |
| Storage | 4TB |
| Training Time | 15 days |
| Number of Models | 99 |
| Iterations | 19,255,000 |
| Game Hands | 7,284,283,624 |


## 📁 Code Structure
├── Pluribus.cpp/hpp # Pluribus algorithm core
├── State.cpp/hpp # Game state search
├── Trainer.cpp/hpp # Trainer
├── GamePool.cpp/hpp # Game pool management
├── InfoNode.cpp/hpp # Information node
├── NumPy.cpp/hpp # Numerical computation
├── TaskExecutor.cpp/hpp # Task execution
└── Configure.cpp/hpp # Configuration management




## 📸 Technical Architecture


| Algorithm Flowchart | Training Curve |
Battle Effect |
| :---: | :---: | :---: |
<img width="379" alt="微信图片_20241030112757" src="https://github.com/user-attachments/assets/c803f6ea-1ab9-4bb7-b2d7-2ca85cc13418">
## 💰 Get the Source Code


✅ Complete C++ AI source code
✅ Pre-trained model files
✅ Training scripts
✅ Deployment documentation


📱 **Telegram: @xuzongbin001**
📧 **Email: masterai918@gmail.com**




---


⭐ Star this repository to support the continuous evolution of this world-class Texas Hold'em AI!
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
2. Compute regret values ​​
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






## MasterAI-3.0-1VS9-NoLimit: One-vs-Many No-Limit Texas Hold'em AI
MasterAI-3.0 is a one-vs-many AI developed by the Master AI team, capable of handling 1v1, 1v2, 1v3, 1v6, and 1v9 scenarios. This highly intelligent, self-learning AI can defeat multiple intermediate-to-advanced players. Online testing and validation have shown that even multiple top-tier domestic and international players struggle to beat MasterAI-3.0 within 3,000 hands in a single game.
(I) Blueprint Algorithm
1. Depth-Limited Search Algorithm V1.0
1) Algorithmic Approach
A decision tree with depth *n* is used to train the model. For nodes exceeding depth *n*, the result is derived by averaging the expected values ​​across four "blueprints" (FOLD, CHECK/CALL, RAISE, DEFAULT). During this process, the current player randomly samples one of the 1,326 possible starting hand combinations for themselves, while opponents are assigned hands via random dealing; the strategy is then iteratively updated.
2. Depth-Limited Search Algorithm V2.0
1) Algorithm Concept
For a decision tree at a specific level (tree depth *n*), limited-iteration training is employed. Beyond this level, the agent plays using four "blueprints" (FOLD, CHECK/CALL, RAISE, DEFAULT), while the opponent follows a random strategy; iterative updates are performed continuously to converge toward a Nash equilibrium.


(II) Model Training
1. Reason for Training
Correction of issues regarding settlement data from training hands (dirty values ​​existed in settlement data for certain game states).
2. Training Parameters


3. Training Environment
 Processor: 2 * 128 Cores
 Memory: 2TB
 Storage: 4TB
4. Training Duration
 Training Time: 15 days
 Number of Models: 99
 Number of Iterations: 19,255,000
 Number of Hands Played: 7,284,283,624


(III) Algorithm Optimization
1. Multi-player CFR algorithm improvements (v2)
2. Model V2 training
3. Validation of improvements to the new search blueprints (v2)
4. Improvement and optimization of new search blueprints
(1) DEFAULT blueprint
(2) FOLD blueprint
(3) CALL blueprint
(4) RAISE blueprint
5. Multi-player CFR algorithm improvements (real-time strategy training time)
6. Search duration optimization (AI decision time: 6ms–10ms)




Those interested in the Master AI 3.0 training model and AI algorithms, or those wishing to purchase the AI ​​source code for collaboration, please contact Telegram: @xuzongbin001

