//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPServer.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include "SupportFuns.h"
#include "Udp_opt.h"
#include "UDPStructs.h"
//---------------------------------------------------------------------------
class Tmainform : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TStatusBar *StaB;
	TIdUDPServer *UDPSvr;
	TMenuItem *N1;
	void __fastcall N1Click(TObject *Sender);
private:	// User declarations

	//UI�������� ״̬��
	enum TUIType{stab};

	TMyIp m_ActiveIP{};                   //�IP
	TDeviceInfo m_DeviceInfo;             //�豸����RAM
	TParams m_Params;                     //������������ݲ���

public:		// User declarations
	__fastcall Tmainform(TComponent* Owner);
	void __fastcall SetBindings(void);
	void __fastcall DataToUI(TUIType UIType);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmainform *mainform;
//---------------------------------------------------------------------------
#endif
