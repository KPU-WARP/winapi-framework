
// Copyright ⓒ https://github.com/KPU-WARP
// 무단 전재 및 재배포 금지
// 코드 사용 시 KoreaGameMaker@gmail.com 연락하시길 바랍니다.

#include "stdafx.h"
#include "GameFrameWork.h"


WGameFrameWork::WGameFrameWork()
{
	Clear();
}

WGameFrameWork::~WGameFrameWork()
{
}

void WGameFrameWork::Reset()
{
}

void WGameFrameWork::Clear()
{
}

void WGameFrameWork::Create(HWND hWnd)
{
	m_hWnd = hWnd;
}

void WGameFrameWork::OnDraw(HDC hdc)
{
	static int x = 10;
	x++;
	Rectangle(hdc, x + 10, 10, x + 100, 100);
}

void WGameFrameWork::OnUpdate(const float frameTime)
{
}

void WGameFrameWork::KeyBoard(UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	switch (iMessage)
	{
		case WM_KEYDOWN:
		{
			if (wParam == VK_Q)
			{
				SendMessage(m_hWnd, WM_DESTROY, 0, 0);
				return;
			}
		}
		break;
		

		case WM_KEYUP:
		{

		}
		break;


	}

}
