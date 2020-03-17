//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitNNR.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormulario_Recursividad *Formulario_Recursividad;
//---------------------------------------------------------------------------
__fastcall TFormulario_Recursividad::TFormulario_Recursividad(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
// Limpiar_Edit1
void __fastcall TFormulario_Recursividad::BtnLimpira1Click(TObject *Sender)
{
	Edit1->Clear();
}
//---------------------------------------------------------------------------
// Limpiar_Edit2
void __fastcall TFormulario_Recursividad::BtnLimpiar2Click(TObject *Sender)
{
	Edit2->Clear();
}
//---------------------------------------------------------------------------
// Limpiar_Edit3
void __fastcall TFormulario_Recursividad::BtnLimpiar3Click(TObject *Sender)
{
	Edit3->Clear();
}
//---------------------------------------------------------------------------
//Limpiar Edit4
void __fastcall TFormulario_Recursividad::BtnLimpiar4Click(TObject *Sender)
{
	Edit4->Clear();
}
//---------------------------------------------------------------------------
// Limpiar_Todo_Edit
void __fastcall TFormulario_Recursividad::BtnLimpiarTodoClick(TObject *Sender)
{
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
	Edit4->Clear();
}
//---------------------------------------------------------------------------
//Salir Formulario
void __fastcall TFormulario_Recursividad::BtnSalirClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

// Limpiar_Edit1
void __fastcall TFormulario_Recursividad::CARGAR1Click(TObject *Sender)
{
   Edit1->Clear();
}
// Limpiar_Edit2
void __fastcall TFormulario_Recursividad::DESCARGAR1Click(TObject *Sender)
{
   Edit2->Clear();
}
//---------------------------------------------------------------------------
// Limpiar_Edit3
void __fastcall TFormulario_Recursividad::LIMPIAR31Click(TObject *Sender)
{
	Edit3->Clear();
}
//---------------------------------------------------------------------------
// Limpiar_Edit4
void __fastcall TFormulario_Recursividad::LIMPIAR41Click(TObject *Sender)
{
	Edit4->Clear();
}
//---------------------------------------------------------------------------
// Limpiar_todos_los_Edits
void __fastcall TFormulario_Recursividad::LIMIPAR1Click(TObject *Sender)
{
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
	Edit4->Clear();
}
//---------------------------------------------------------------------------
// Salir
void __fastcall TFormulario_Recursividad::SALIR1Click(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//                              AL ALGORITMOS                              //
//---------------------------------------------------------------------------
// Mostrar_N_Enteros - EJE: 5 -> 1,2,3,4,5
void Mostrar_N_Enteros(byte n){
	if (n==0) {
	}else{
		Mostrar_N_Enteros(n-1);
		ShowMessage(n);
	}
}
//---------------------------------------------------------------------------
// Mostrar_N_Enteros_Invertidos - EJE: 5 -> 5,4,3,2,1
void Mostrar_N_Enteros_Invertidos(byte n){
	if (n==0) {
	}else{
		ShowMessage(n);
		Mostrar_N_Enteros_Invertidos(n-1);
	}
}
//---------------------------------------------------------------------------
// Mostrar_N_Enteros_Pares - EJE: 5 -> 2,4,6,8,10
void Mostrar_N_Enteros_Pares(byte n){
	if (n==0) {
	}else{
		Mostrar_N_Enteros_Pares(n-1);
		ShowMessage(n*2);
	}
}
//---------------------------------------------------------------------------
// Mostrar_N_Enteros_Pares_Invertidos - EJE: 5 -> 10,8,6,4,2
void Mostrar_N_Enteros_Pares_Invertidos(byte n){
	if (n==0) {
	}else{
		ShowMessage(n*2);
		Mostrar_N_Enteros_Pares_Invertidos(n-1);
	}
}
//---------------------------------------------------------------------------
// Mostrar_N_Enteros_Impares - EJE: 5 -> 1,3,5,7,9
void Mostrar_N_Enteros_Impares(byte n){
	if (n==0) {
	}else{
		Mostrar_N_Enteros_Impares(n-1);
		ShowMessage((n*2)-1);
	}
}
//---------------------------------------------------------------------------
// Mostrar_N_Enteros_Impares_Invertidos - EJE: 5 -> 9,7,5,3,1
void Mostrar_N_Enteros_Impares_Invertidos(byte n){
	if (n==0) {
	}else{
		ShowMessage((n*2)-1);
		Mostrar_N_Enteros_Impares_Invertidos(n-1);
	}
}
//---------------------------------------------------------------------------
// Eliminar_Dig_Pares - EJE: 123456789 => 13579
void Eliminar_Dig_Pares(Cardinal &n){
	if ( n < 10 ) {
	if ( n % 2 == 0 )
	  n = 0;
  }
  else {
	byte d;
	d = n % 10;
	n = n / 10;
	Eliminar_Dig_Pares( n );
	if ( d % 2 == 1 )
	  n = n * 10 + d;
  }
}
//---------------------------------------------------------------------------
// Eliminar_Dig_Impares - EJE: 123456789 => 2468
void Eliminar_Dig_Impares(Cardinal &n){
	if ( n < 10 ) {
	if ( n % 2 == 1 )
	  n = 0;
  }
  else {
	byte d;
	d = n % 10;
	n = n / 10;
	Eliminar_Dig_Impares( n );
	if ( d % 2 == 0 )
	  n = n * 10 + d;
  }
}
//---------------------------------------------------------------------------
// Contar_Digitos - EJE: 56789 => 5
int c=0;
int Contar_Digitos(int n){
	if (n>0) {
	   c++;
	   n/=10;
	   Contar_Digitos(n);
	}
	return c;
}
//---------------------------------------------------------------------------
// Contar_Digitos_Pares - EJE: 56789 => 2
int cc=0;
int Contar_Digitos_Pares(int n){

	if (n==0) {
	}else{
		Mostrar_N_Enteros_Pares(n-1);

		cc++;
	}
	return cc;
}
//---------------------------------------------------------------------------
// Contar_Digitos_Impares - EJE: 56789 => 3
int ccc=0;
int Contar_Digitos_Impares(int n){
	if ( n < 10 ) {
	if ( n % 2 == 1 ){
	  n = 0;
	  }else{
		ccc++;
	}
  }
  else {
	byte d;
	d = n % 10;
	n = n / 10;
	Contar_Digitos_Impares( n );
	if ( d % 2 == 0 ){
	 n = n * 10 + d;
	}else{
		ccc++;
	}
  }
  return ccc;
}
//---------------------------------------------------------------------------
// Obtener el factorial - EJE: 3! => 6
int Obtener_factorial(int n){
	if (n==0) {
		n=1;
	}else{
		n=n*Obtener_factorial(n-1);
	}
	return n;
}
//---------------------------------------------------------------------------
//                        LLAMADA A LOS ALGORITMOS                         //
//---------------------------------------------------------------------------
//Mostrar_N_Enteros EJJE: 5 -> 1,2,3,4,5
void __fastcall TFormulario_Recursividad::NNatural1Click(TObject *Sender)
{
	byte n;
	n=StrToInt(Edit1->Text);
	Mostrar_N_Enteros(n);
}
//---------------------------------------------------------------------------
// Mostrar_N_Enteros_Invertidos EJJE: 5 -> 5,4,3,2,1
void __fastcall TFormulario_Recursividad::NNanturalInvertido1Click(TObject *Sender)
{
	byte n;
	n=StrToInt(Edit1->Text);
	Mostrar_N_Enteros_Invertidos(n);
}
//---------------------------------------------------------------------------
// Mostrar_N_Enteros_Pares - EJJE: 5 -> 2,4,6,8,10
void __fastcall TFormulario_Recursividad::NEnterosPares1Click(TObject *Sender)
{
	byte n;
	n=StrToInt(Edit1->Text);
	Mostrar_N_Enteros_Pares(n);
}
//---------------------------------------------------------------------------
// Mostrar_N_Enteros_Pares_Invertidos - EJE: 5 -> 10,8,6,4,2
void __fastcall TFormulario_Recursividad::NEnterosParesInvertidos1Click(TObject *Sender)
{
	byte n;
	n=StrToInt(Edit1->Text);
	Mostrar_N_Enteros_Pares_Invertidos(n);
}
//---------------------------------------------------------------------------
// Mostrar_N_Enteros_Impares - EJE: 5 -> 1,3,5,7,9
void __fastcall TFormulario_Recursividad::NEnterosImpares1Click(TObject *Sender)
{
	byte n;
	n=StrToInt(Edit1->Text);
	Mostrar_N_Enteros_Impares(n);
}
//---------------------------------------------------------------------------
// Mostrar_N_Enteros_Impares_Invertidos - EJE: 5 -> 9,7,5,3,1
void __fastcall TFormulario_Recursividad::EnterosImparesInvertidos1Click(TObject *Sender)
{
	byte n;
	n=StrToInt(Edit1->Text);
	Mostrar_N_Enteros_Impares_Invertidos(n);
}
//---------------------------------------------------------------------------
// Eliminar_Dig_Pares - EJE: 123456789 => 13579
void __fastcall TFormulario_Recursividad::DigPares1Click(TObject *Sender)
{
   Cardinal n;
   n=StrToInt(Edit1->Text);
   Eliminar_Dig_Pares(n);
   Edit4->Text=(n);
}
//---------------------------------------------------------------------------
// Eliminar_Dig_Impares - EJE: 123456789 => 2468
void __fastcall TFormulario_Recursividad::DigImpares1Click(TObject *Sender)
{
   Cardinal n;
   n=StrToInt(Edit1->Text);
   Eliminar_Dig_Impares(n);
   Edit4->Text=(n);
}
//---------------------------------------------------------------------------
// Contar_Digitos - EJE: 56789 => 5
void __fastcall TFormulario_Recursividad::Digitos1Click(TObject *Sender)
{
   Cardinal n;
   n=StrToInt(Edit1->Text);
   Edit4->Text=Contar_Digitos(n);
}
//---------------------------------------------------------------------------
// Contar_Digitos_Pares - EJE: 56789 => 2
void __fastcall TFormulario_Recursividad::DigitosPares1Click(TObject *Sender)
{
   Cardinal n;
   n=StrToInt(Edit1->Text);
   Edit4->Text=Contar_Digitos_Pares(n);
}
//---------------------------------------------------------------------------
// Obtener el factorial - EJE: 3! => 6
void __fastcall TFormulario_Recursividad::FACTORIAL1Click(TObject *Sender)
{
   int n;
   n=StrToInt(Edit1->Text);
   Edit4->Text=Obtener_factorial(n);
}
//---------------------------------------------------------------------------
// Obtener el factorial - EJE: 3! => 6
void __fastcall TFormulario_Recursividad::FACTORIAL1Click(TObject *Sender)
{
   int n;
   n=StrToInt(Edit1->Text);
   Edit4->Text=Obtener_factorial(n);
}
//---------------------------------------------------------------------------

