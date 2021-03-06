//---------------------------------------------------------------------------

#ifndef UnitPFH
#define UnitPFH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TUnitFP : public TForm
{
__published:	// IDE-managed Components
	TPanel *PanelPF;
	TImage *ImagePF;
	TButton *BtnRecursividadPF;
	TButton *BtnConteoPF;
	TButton *BtnSalirPF;
	void __fastcall BtnRecursividadPFClick(TObject *Sender);
	void __fastcall BtnSalirPFClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TUnitFP(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUnitFP *UnitFP;
//---------------------------------------------------------------------------
#endif
