
// MFCApplication911centerDlg.h : header file
//

#pragma once
#include "Event.h"
#include "Client.h"
#include "FireFighter.h"
#include "Paramedic.h"
#include "Policeman.h"
constexpr auto POLICE = 0;
constexpr auto PARAMEDIC = 1;
constexpr auto FIREFIGHTER = 2;
constexpr auto CLIENT = 3 ;

#include <vector>

// CMFCApplication911centerDlg dialog
class CMFCApplication911centerDlg : public CDialogEx ,public Event
{
// Construction
public:
	CMFCApplication911centerDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION911CENTER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	

public:
	afx_msg void OnCbnSelchangeComboEmergency();
	afx_msg void OnBnClickedCallerButtonStart();
	afx_msg void OnBnClickedRadioEventFormMale();
	afx_msg void OnBnClickedRadioEventFormFemale();
	afx_msg void OnBnClickedRadioPolice();
	afx_msg void OnBnClickedRadioFireman();
	afx_msg void OnBnClickedRadioParamedic();
	afx_msg void OnBnClickedRadioEmployeeMale();
	afx_msg void OnBnClickedRadioEmployeeFemale();
	void clearTextBoxOfClient();
	void clearTextBoxOfEmployee();
	bool isTextFieldsOfEmployeeFull();
	bool isTextFieldsOfClientFull();
	// Inherited via Event
	virtual bool openEvent();
	virtual bool emergencyUnits();
	virtual bool CloseEvent();
	virtual void HandleEvent(CString event);
	void addEventsToComboBox();

	//all belong to caller
	CComboBox m_comboBoxControlEmergency;
	CString m_strEmergencyList;
	CString m_ClientName;
	CString m_ClientLastName;
	CString m_ClientCity;
	CString m_ClientAddress;
	CString m_ClientReport;
	CString m_ClientGender;
    CString m_ClientPhone;
	//cedit of caller
	CEdit c_ClientReport;
	CEdit c_ClientName;
	CEdit c_ClientLastName;
	CEdit c_clientCity;
	CEdit c_ClientPhone;
	CEdit c_ClientAddress;

	CString m_EmployeeJob;
	CString m_EmployeeGender;

	//afx_msg void HandleEmergency(Client *temp);
	CString m_Activity_log;
	CArray <CString, CString> strActivityDisplayLog;
	CArray <CString, CString> strOnShiftDisplay;
private:
	int clientsNumber=0;
	int employeeNumber=0;
	bool PoliceOnShift = false;
	bool FireFighterOnShift = false;
	bool ParamedicOnShift = false;

public:
	CEdit c_EmployeeName;
	CString m_EmployeeName;
	CEdit c_EmployeeLastName;
	CString m_EmployeeLastName;
	CString m_EmployeeCity;
	CEdit c_EmployeeCity;
	CEdit c_EmployeePhone;
	CString m_EmployeePhone;
	CEdit c_EmployeeAddress;
	CString m_EmployeeAddress;
	CEdit c_EmployeeOnShift;
	CString m_EmployeeOnShift;
	vector<Employee*> arrOfEmployee;
	afx_msg void OnBnClickedEmployeeButtonAdd();
	CButton m_radioPolice;
	CButton c_radioFireFrighter;
	CButton c_radioParamedic;
	CButton c_EmployeeMale;
	CButton c_EmployeeFemale;
	CButton c_radioClientMale;
	CButton c_radioClientFemale;
};
