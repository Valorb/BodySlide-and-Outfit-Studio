#ifndef __NormalsGenDialog__
#define __NormalsGenDialog__

/**
@file
Subclass of baseNormGenDlg, which is generated by wxFormBuilder.
*/

#include "baseNormalsOptDlg.h"

//// end generated include

#include "wx/textdlg.h"

/** Implementing baseNormGenDlg */
class NormalsGenDialog : public baseNormGenDlg
{
	protected:
		// Handlers for baseNormGenDlg events.
		void doPropertyChanged( wxPropertyGridEvent& event );
		void doAddLayer( wxCommandEvent& event );
		void doMoveUpLayer( wxCommandEvent& event );
		void doDeleteLayer( wxCommandEvent& event );
		void doSetOutputFileName( wxFileDirPickerEvent& event );
		void doPreviewNormalMap( wxCommandEvent& event );
		void doGenerateNormalMap( wxCommandEvent& event );
	public:
		/** Constructor */
		NormalsGenDialog( wxWindow* parent );
	//// end generated class members

	protected:
		void doPropSelected(wxPropertyGridEvent& event);
};

#endif // __NormalsGenDialog__