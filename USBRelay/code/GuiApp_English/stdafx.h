// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�:
#include <windows.h>

#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>



#ifdef _DEBUG
#pragma comment(lib, "../../lib/xcgui/XCGUId.lib")
#pragma comment(lib, "../../lib/usb_relay_dll/usb_relay_device.lib")
#else
#pragma comment(lib, "../../lib/xcgui/XCGUI.lib")
#pragma comment(lib, "../../lib/usb_relay_dll/usb_relay_device.lib")
#endif

#include "../../lib/xcgui/xcgui.h"
#include "../../lib/usb_relay_dll/usb_relay_device.h"

#include "str_tools.h"

#include <map>
using namespace std;