# algorithm_practice_with_codetree 🧮

> [Codetree](https://www.codetree.ai/) 기반 알고리즘 풀이 저장소. **날짜별 폴더 + 같은 문제를 다음 날 다시 풀어보기**라는 학습 루틴을 코드와 회고로 남깁니다.

## 🗂 구성

```
algorithm_practice_with_codetree/
├── 260323/
│   ├── README.md                              # 그 날의 풀이 메모
│   ├── bit 계산/
│   │   ├── README.md                          # 문제별 회고
│   │   └── bit-calculation.cpp
│   └── 겹치는 bit가 없는 세 수/
│       ├── README.md
│       └── three-numbers-with-no-overlapping-bits.cpp
└── 260324/
    └── 겹치는 bit가 없는 세 수/                # 같은 문제, 하루 뒤 다시 풀이
        ├── README.md
        └── three-numbers-with-no-overlapping-bits.cpp
```

> 폴더 이름이 `YYMMDD` 6자리(예: `260323` = 2026-03-23)인 이유는 **그 날 무엇을 했는지**를 git history와 별개로 디렉토리 자체에서 보이게 하기 위함입니다.

## 🎯 학습 루틴

1. **하루치 문제 풀이** → `YYMMDD/` 폴더 생성
2. **문제별 README 작성** — 사고 과정, 막힌 지점, 시간복잡도
3. **다음 날 같은 문제 다시 풀기** → 다른 날짜 폴더에 같은 문제 폴더 추가
4. **두 풀이를 비교** — 어디가 깔끔해졌고, 어디는 여전히 어색한지

## 🛠 언어

- **C++**

## 💭 이 방식이 좋았던 이유

- "푼 적 있다"와 "다시 풀 수 있다"는 다른 능력입니다. 같은 문제를 일부러 다음 날 다시 풀어보면, 어제의 풀이가 정말 내 것이었는지 검증됩니다.
- 디렉토리 구조 자체가 **시간순 학습 일지** 역할을 합니다.
