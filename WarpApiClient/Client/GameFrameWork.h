#pragma once

// Copyright ⓒ https://github.com/KPU-WARP
// 무단 전재 및 재배포 금지
// 코드 사용 시 KoreaGameMaker@gmail.com 연락하시길 바랍니다.

class WGameFramework
{
public:
	WGameFramework();
	~WGameFramework();

	virtual void Reset();
	virtual void Clear();

	virtual void Create(HWND hWnd);
	virtual void OnDraw(HDC hdc);
	virtual void OnUpdate(const float frameTime = 0.17f);
	virtual void KeyBoard(UINT iMessage, WPARAM wParam, LPARAM lParam);

private:
	HWND	m_hWnd;
};

