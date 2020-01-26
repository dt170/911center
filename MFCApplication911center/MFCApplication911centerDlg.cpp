
// MFCApplication911centerDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication911center.h"
#include "MFCApplication911centerDlg.h"
#include "afxdialogex.h"
#include <typeinfo>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif



// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
public:
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication911centerDlg dialog



CMFCApplication911centerDlg::CMFCApplication911centerDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION911CENTER_DIALOG, pParent)
	, m_strEmergencyList(_T(""))
	, m_ClientName(_T(""))
	, m_ClientLastName(_T(""))
	, m_ClientCity(_T(""))
	, m_ClientAddress(_T(""))
	, m_ClientReport(_T(""))
	, m_ClientPhone(_T(""))
	, m_ClientGender(_T("Unknown"))
	, m_Activity_log(_T(""))
	, m_EmployeeName(_T(""))
	, m_EmployeeGender(_T(""))
	, m_EmployeeLastName(_T(""))
	, m_EmployeeCity(_T(""))
	, m_EmployeeJob(_T(""))
	, m_EmployeePhone(_T(""))
	, m_EmployeeAddress(_T(""))
	, m_EmployeeOnShift(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication911centerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO_EMERGENCY_LIST, m_comboBoxControlEmergency);
	DDX_CBString(pDX, IDC_COMBO_EMERGENCY_LIST, m_strEmergencyList);
	DDX_Text(pDX, IDC_CALLER_NAME, m_ClientName);
	DDX_Text(pDX, IDC_CALLER_LAST_NAME, m_ClientLastName);
	DDX_Text(pDX, IDC_CALLER_CITY, m_ClientCity);
	DDX_Text(pDX, IDC_CALLER_ADDRESS, m_ClientAddress);
	DDX_Text(pDX, IDC_CALLER_REPORT, m_ClientReport);
	DDX_Text(pDX, IDC_EDIT6, m_ClientPhone);

	DDX_Text(pDX, IDC_ACTICITY_LOG, m_Activity_log);
	DDX_Control(pDX, IDC_CALLER_REPORT, c_ClientReport);
	DDX_Control(pDX, IDC_CALLER_NAME, c_ClientName);
	DDX_Control(pDX, IDC_CALLER_LAST_NAME, c_ClientLastName);
	DDX_Control(pDX, IDC_CALLER_CITY, c_clientCity);
	DDX_Control(pDX, IDC_EDIT6, c_ClientPhone);
	DDX_Control(pDX, IDC_CALLER_ADDRESS, c_ClientAddress);
	DDX_Control(pDX, IDC_EMPLOYEE_NAME, c_EmployeeName);
	DDX_Text(pDX, IDC_EMPLOYEE_NAME, m_EmployeeName);
	DDX_Control(pDX, IDC_EMPLOYEE_LAST_NAME, c_EmployeeLastName);
	DDX_Text(pDX, IDC_EMPLOYEE_LAST_NAME, m_EmployeeLastName);
	DDX_Text(pDX, IDC_EMPLOYEE_CITY, m_EmployeeCity);
	DDX_Control(pDX, IDC_EMPLOYEE_CITY, c_EmployeeCity);
	DDX_Control(pDX, IDC_EMPLOYEE_PHONE, c_EmployeePhone);
	DDX_Text(pDX, IDC_EMPLOYEE_PHONE, m_EmployeePhone);
	DDX_Control(pDX, IDC_EMPLOYEE_ADDRESS, c_EmployeeAddress);
	DDX_Text(pDX, IDC_EMPLOYEE_ADDRESS, m_EmployeeAddress);
	DDX_Control(pDX, IDC_EMPLOYEE_ON_SHIFT, c_EmployeeOnShift);
	DDX_Text(pDX, IDC_EMPLOYEE_ON_SHIFT, m_EmployeeOnShift);
	DDX_Control(pDX, IDC_RADIO_POLICE, m_radioPolice);
	DDX_Control(pDX, IDC_RADIO_FIREMAN, c_radioFireFrighter);
	DDX_Control(pDX, IDC_RADIO_PARAMEDIC, c_radioParamedic);
	DDX_Control(pDX, IDC_RADIO3, c_EmployeeMale);
	DDX_Control(pDX, IDC_RADIO4, c_EmployeeFemale);
	DDX_Control(pDX, IDC_RADIO1, c_radioClientMale);
	DDX_Control(pDX, IDC_RADIO2, c_radioClientFemale);
}

BEGIN_MESSAGE_MAP(CMFCApplication911centerDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELCHANGE(IDC_COMBO_EMERGENCY_LIST, &CMFCApplication911centerDlg::OnCbnSelchangeComboEmergency)
	ON_BN_CLICKED(IDC_CALLER_BUTTON_START, &CMFCApplication911centerDlg::OnBnClickedCallerButtonStart)

	ON_BN_CLICKED(IDC_RADIO1, &CMFCApplication911centerDlg::OnBnClickedRadioEventFormMale)
	ON_BN_CLICKED(IDC_RADIO2, &CMFCApplication911centerDlg::OnBnClickedRadioEventFormFemale)
	ON_BN_CLICKED(IDC_RADIO_POLICE, &CMFCApplication911centerDlg::OnBnClickedRadioPolice)
	ON_BN_CLICKED(IDC_RADIO_FIREMAN, &CMFCApplication911centerDlg::OnBnClickedRadioFireman)
	ON_BN_CLICKED(IDC_RADIO_PARAMEDIC, &CMFCApplication911centerDlg::OnBnClickedRadioParamedic)
	ON_BN_CLICKED(IDC_RADIO3, &CMFCApplication911centerDlg::OnBnClickedRadioEmployeeMale)
	ON_BN_CLICKED(IDC_RADIO4, &CMFCApplication911centerDlg::OnBnClickedRadioEmployeeFemale)
	ON_BN_CLICKED(IDC_EMPLOYEE_BUTTON_ADD, &CMFCApplication911centerDlg::OnBnClickedEmployeeButtonAdd)
END_MESSAGE_MAP()


// CMFCApplication911centerDlg message handlers

BOOL CMFCApplication911centerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	addEventsToComboBox();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCApplication911centerDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCApplication911centerDlg::OnPaint()
{
	CPaintDC dc(this);
	CRect rect;
	GetClientRect(&rect);

	CFont font;
	font.CreatePointFont(500, _T("Arial"));
	CFont* oldFont = dc.SelectObject(&font);
	dc.SetBkMode(TRANSPARENT);

	CString string = _T("911 Center");
	rect.OffsetRect(8, 8);
	dc.SetTextColor(RGB(255, 0, 0));
	dc.DrawText(string, &rect, DT_TOP | DT_CENTER);

	rect.OffsetRect(-3, -3);
	dc.SetTextColor(RGB(0, 96, 255));
	dc.DrawText(string, &rect, DT_TOP | DT_CENTER);
	dc.SelectObject(oldFont);

}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCApplication911centerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication911centerDlg::OnCbnSelchangeComboEmergency(){
	// TODO: Add your control notification handler code here
	m_comboBoxControlEmergency.GetLBText(m_comboBoxControlEmergency.GetCurSel(), m_strEmergencyList);
	
}


void CMFCApplication911centerDlg::OnBnClickedCallerButtonStart(){
	CString str1;
	int tempPhone = 0;
		//turn it into int
		tempPhone = _tstoi(m_ClientPhone);
		if (openEvent()) {
			m_Activity_log.SetString(L""); // clear the error if needed
			Client temp(m_ClientName, m_ClientLastName, m_ClientGender, m_ClientAddress, m_ClientCity, tempPhone, m_ClientReport, m_strEmergencyList);
			strActivityDisplayLog.Add(L"***********************ACTIVE***********************");
		
			strActivityDisplayLog.Add(L"Name: "+temp.getName());
			strActivityDisplayLog.Add(L"Last Name: "+temp.getLastName());
			strActivityDisplayLog.Add(L"Gender: "+temp.getGender());
			strActivityDisplayLog.Add(L"Emergency: "+temp.getEmergency());
			strActivityDisplayLog.Add(L"----------------------------------------------------");

			strActivityDisplayLog.Add(L"***********************CLOSED***********************");
			for (int i = 0; i < strActivityDisplayLog.GetSize(); i++) {
				m_Activity_log.Append(strActivityDisplayLog.GetAt(i) + L"\r" + "\n");
			}
		}
		clearTextBoxOfClient();
		UpdateData(FALSE); // clear all texts 
		 
	// TODO: Add your control notification handler code here
}



void CMFCApplication911centerDlg::OnBnClickedRadioEventFormMale(){
	m_ClientGender = "Male";
}


void CMFCApplication911centerDlg::OnBnClickedRadioEventFormFemale(){
	m_ClientGender = "Female";
}

bool CMFCApplication911centerDlg::openEvent(){
	CString str1;
	int tempPhone = 0;

	//get all inboxes (can put it on function)
	c_ClientReport.GetWindowTextW(m_ClientReport);
	c_ClientName.GetWindowTextW(m_ClientName);
	c_ClientLastName.GetWindowTextW(m_ClientLastName);
	c_clientCity.GetWindowTextW(m_ClientCity);
	c_ClientAddress.GetWindowTextW(m_ClientAddress);
	m_comboBoxControlEmergency.GetWindowTextW(m_strEmergencyList);
	c_ClientPhone.GetWindowTextW(m_ClientPhone);

	if (!isTextFieldsOfClientFull()) {
		m_Activity_log.SetString(L"Error! make sure to fill all the details!"); // set error msg if not all information entered
		return false;
	}
	return true;
}

bool CMFCApplication911centerDlg::emergencyUnits(){

	return false;
}

bool CMFCApplication911centerDlg::CloseEvent(){

	return false;
}

void CMFCApplication911centerDlg::HandleEvent(CString event){
	if (event.Compare(_T("Robbery"))) {

	}
	

}

//adding all events to combobox 
void CMFCApplication911centerDlg::addEventsToComboBox(){
	//need to add here all the list of emergency types
	vector<CString> temp;
	temp.push_back(_T("Robbery"));
	temp.push_back(_T("Fire"));
	temp.push_back(_T("Event with casualties"));
	temp.push_back(_T("Injurie"));
	temp.push_back(_T("Smoke in a building"));
	temp.push_back(_T("Car crash"));
	temp.push_back(_T("Homicede"));
	temp.push_back(_T("Animal Rescue"));

	for (int i = 0; i<temp.size(); i++) {
		m_strEmergencyList.Format(temp[i], i);
		m_comboBoxControlEmergency.AddString(m_strEmergencyList);
	}

}



void CMFCApplication911centerDlg::OnBnClickedRadioPolice(){
	m_EmployeeJob = "Police";

}


void CMFCApplication911centerDlg::OnBnClickedRadioFireman(){
	m_EmployeeJob = "FireFighter";
}


void CMFCApplication911centerDlg::OnBnClickedRadioParamedic(){
	m_EmployeeJob = "Paramedic";
}


void CMFCApplication911centerDlg::OnBnClickedRadioEmployeeMale(){
	m_EmployeeGender = "Male";
}


void CMFCApplication911centerDlg::OnBnClickedRadioEmployeeFemale(){
	m_EmployeeGender = "Female";
}

void CMFCApplication911centerDlg::clearTextBoxOfClient(){
	//get all inboxes (can put it on function)
	 m_ClientReport.SetString(_T(""));
	 m_ClientName.SetString(_T(""));
     m_ClientLastName.SetString(_T(""));
     m_ClientCity.SetString(_T(""));
     m_ClientAddress.SetString(_T(""));	
	 m_ClientPhone.SetString(_T(""));
	 m_ClientGender.SetString(_T(""));
	 //uncheck radio buttons
	 c_radioClientFemale.SetCheck(BST_UNCHECKED);
	 c_radioClientMale.SetCheck(BST_UNCHECKED);
}

void CMFCApplication911centerDlg::clearTextBoxOfEmployee(){
	     m_EmployeeName.SetString(_T(""));
		 m_EmployeeGender.SetString(_T(""));
		 m_EmployeeLastName.SetString(_T(""));
		 m_EmployeeCity.SetString(_T(""));
		 m_EmployeeJob.SetString(_T(""));
		 m_EmployeePhone.SetString(_T(""));
		 m_EmployeeAddress.SetString(_T(""));

		 // uncheck all radio buttons of employee 
		 m_radioPolice.SetCheck(BST_UNCHECKED);
		 c_radioFireFrighter.SetCheck(BST_UNCHECKED);
		 c_radioParamedic.SetCheck(BST_UNCHECKED);
		 c_EmployeeMale.SetCheck(BST_UNCHECKED);
		 c_EmployeeFemale.SetCheck(BST_UNCHECKED);
}

bool CMFCApplication911centerDlg::isTextFieldsOfEmployeeFull(){

	return !(m_EmployeeName == "" |	m_EmployeeGender == "" |	m_EmployeeLastName == "" | 	m_EmployeeCity == "" |	m_EmployeeJob == "" | 	m_EmployeePhone == "" |	m_EmployeeAddress == "");
		
}

bool CMFCApplication911centerDlg::isTextFieldsOfClientFull(){

	return  !(m_ClientName == "" | m_ClientLastName == "" | m_ClientCity == "" | m_ClientAddress == "" | m_strEmergencyList == "" | m_ClientPhone == "");
}


void CMFCApplication911centerDlg::OnBnClickedEmployeeButtonAdd(){
	int phone = 0;

	// get all texts from shift manager
	c_EmployeeName.GetWindowTextW(m_EmployeeName);
	c_EmployeeLastName.GetWindowTextW(m_EmployeeLastName);
	c_EmployeeCity.GetWindowTextW(m_EmployeeCity);
	c_EmployeeAddress.GetWindowTextW(m_EmployeeAddress);
	c_EmployeePhone.GetWindowTextW(m_EmployeePhone);
	c_EmployeeName.GetWindowTextW(m_EmployeeName);
	phone = _tstoi(m_ClientPhone);

	if (!isTextFieldsOfEmployeeFull()) {
		m_EmployeeOnShift.SetString(L"Error! make sure to fill all the details!");
	}
	else {
		m_EmployeeOnShift.SetString(L"");
		if (m_EmployeeJob == "FireFighter") {
			FireManOnShift = true;
			arrOfEmployee.push_back(new FireFighter(m_EmployeeName, m_EmployeeLastName,m_EmployeeGender,m_EmployeeAddress,m_EmployeeCity,phone));
		}
		if (m_EmployeeJob == "Police"){
			PoliceOnShift = true;
			arrOfEmployee.push_back(new Policeman(m_EmployeeName, m_EmployeeLastName, m_EmployeeGender, m_EmployeeAddress, m_EmployeeCity, phone,0));
		}
		if (m_EmployeeJob == "Paramedic") {
			ParamedicOnShift = true;
			arrOfEmployee.push_back(new Paramedic(m_EmployeeName, m_EmployeeLastName, m_EmployeeGender, m_EmployeeAddress, m_EmployeeCity, phone));
		}
		
		strOnShiftDisplay.Add(L"*************ADDED-TO-SHIFT**************");
		strOnShiftDisplay.Add(L"Job: " + m_EmployeeJob);// handle it
		strOnShiftDisplay.Add(L"Name: " + arrOfEmployee[employeeNumber]->getName());
		strOnShiftDisplay.Add(L"Last Name: " + arrOfEmployee[employeeNumber]->getLastName());
		strOnShiftDisplay.Add(L"Gender: " + arrOfEmployee[employeeNumber]->getGender());
		strOnShiftDisplay.Add(L"******************************************");

		for (int i = 0; i < strOnShiftDisplay.GetSize(); i++) {
			m_EmployeeOnShift.Append(strOnShiftDisplay.GetAt(i) + L"\r" + "\n");
		}
		employeeNumber++;
	}
	clearTextBoxOfEmployee();
	UpdateData(FALSE);
}
