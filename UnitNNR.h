//---------------------------------------------------------------------------

#ifndef UnitNNRH
#define UnitNNRH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFormulario_Recursividad : public TForm
{
__published:	// IDE-managed Components
	TPanel *PanelRecursividad;
	TMainMenu *MainMenuRecursividad;
	TButton *BtnLimpira1;
	TButton *BtnLimpiar2;
	TButton *BtnLimpiar4;
	TButton *BtnSalir;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TMenuItem *INICIO1;
	TMenuItem *CARGAR1;
	TMenuItem *DESCARGAR1;
	TMenuItem *LIMIPAR1;
	TMenuItem *SALIR1;
	TMenuItem *NUMERONATURALES1;
	TMenuItem *MOSTRAR1;
	TMenuItem *NNatural1;
	TMenuItem *NNanturalInvertido1;
	TMenuItem *NEnterosPares1;
	TMenuItem *NEnterosParesInvertidos1;
	TMenuItem *NEnterosImpares1;
	TButton *BtnLimpiar3;
	TButton *BtnLimpiarTodo;
	TMenuItem *EnterosImparesInvertidos1;
	TMenuItem *ELIMINAR1;
	TMenuItem *DigPares1;
	TMenuItem *DigImpares1;
	TImage *ImageDeveloper;
	TMenuItem *CONTAR1;
	TMenuItem *Digitos1;
	TMenuItem *DigitosPares1;
	TMenuItem *DigitosImpares1;
	TMenuItem *OBTENER1;
	TMenuItem *FACTORIAL1;
	TMenuItem *ORDEN1;
	TMenuItem *Acendente1;
	TMenuItem *Decendente1;
	TMenuItem *Invertir1;
	TMenuItem *Normal1;
	TMenuItem *Potencia1;
	TMenuItem *VECTORES1;
	TMenuItem *LIMPIAR31;
	TMenuItem *LIMPIAR41;
	void __fastcall NNatural1Click(TObject *Sender);
	void __fastcall BtnSalirClick(TObject *Sender);
	void __fastcall BtnLimpiar4Click(TObject *Sender);
	void __fastcall NNanturalInvertido1Click(TObject *Sender);
	void __fastcall NEnterosPares1Click(TObject *Sender);
	void __fastcall NEnterosParesInvertidos1Click(TObject *Sender);
	void __fastcall NEnterosImpares1Click(TObject *Sender);
	void __fastcall BtnLimpira1Click(TObject *Sender);
	void __fastcall BtnLimpiar2Click(TObject *Sender);
	void __fastcall BtnLimpiar3Click(TObject *Sender);
	void __fastcall BtnLimpiarTodoClick(TObject *Sender);
	void __fastcall EnterosImparesInvertidos1Click(TObject *Sender);
	void __fastcall DigPares1Click(TObject *Sender);
	void __fastcall DigImpares1Click(TObject *Sender);
	void __fastcall Digitos1Click(TObject *Sender);
	void __fastcall DigitosPares1Click(TObject *Sender);
	void __fastcall FACTORIAL1Click(TObject *Sender);
	void __fastcall SALIR1Click(TObject *Sender);
	void __fastcall DESCARGAR1Click(TObject *Sender);
	void __fastcall LIMPIAR31Click(TObject *Sender);
	void __fastcall LIMPIAR41Click(TObject *Sender);
	void __fastcall LIMIPAR1Click(TObject *Sender);
	void __fastcall CARGAR1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormulario_Recursividad(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormulario_Recursividad *Formulario_Recursividad;
//---------------------------------------------------------------------------
#endif
