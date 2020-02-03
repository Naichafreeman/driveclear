// driveclearDlg.h : 头文件
//

#pragma once
#include "afxwin.h"

struct  GM_SM3Hash
{
	int len;
	unsigned char sm3hash[32];
};
struct	GM_TestFile
{
	CString filename;
	std::vector<GM_SM3Hash> vecSM3Hash;
};
// CdriveclearDlg 对话框
class CdriveclearDlg : public CDialog
{
// 构造
public:
	CdriveclearDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_DRIVECLEAR_DIALOG };
	void noticemain(LPCTSTR shengyu,LPCTSTR sudu,long dangqian,long zonggong);
	void appendInfo(const char* str);
	ULONGLONG getDiskSpaceRemain(const char *path);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	void showInfo();

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	void refreshdskinfo();
	
	void CdriveclearDlg::getdiskinfo(LPCTSTR rootpath);
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg void OnClose(); 
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg BOOL OnDeviceChange(UINT nEventType, DWORD_PTR dwData);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedStart();
public:
	CButton m_capcheck;
};
