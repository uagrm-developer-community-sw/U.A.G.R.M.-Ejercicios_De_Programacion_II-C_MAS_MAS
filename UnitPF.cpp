//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitPF.h"
#include "UnitNNR.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TUnitFP *UnitFP;
//---------------------------------------------------------------------------
__fastcall TUnitFP::TUnitFP(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TUnitFP::BtnRecursividadPFClick(TObject *Sender)
{

	Formulario_Recursividad->Show();
}
//---------------------------------------------------------------------------
void __fastcall TUnitFP::BtnSalirPFClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

