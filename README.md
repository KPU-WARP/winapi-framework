# winapi-framework

// Copyright ⓒ https://github.com/KPU-WARP
// 무단 전재 및 재배포 금지
// 코드 사용 시 KoreaGameMaker@gmail.com 연락하시길 바랍니다.

 [프로젝트 생성시 고려사항]
  - 친절한 주석
  - FPS 윈도우 표시는 WM_TIMER 기반이므로 개발하지 않았습니다.
  - PeekMessage 기반입니다.
  - 더블 버퍼링은 WM_PAINT에서 진행합니다.
  - 

[제한사항]
 - C++ 기반 입니다. 
 - STL 사용 금지입니다.

 
[현재 적용 된 코딩 컨벤션]
 - 모든 파일 위에 저작권을 명시한다.
 - 클래스 앞에는 Warp에 W를 붙여 생성한다.
 - 멤버변수는 m_ 을 접두사로 사용합니다.
 - 항상 호출되는 함수에는 On을 붙여 줍니다.
