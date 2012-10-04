/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:17 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 39 "sipQtGuiQSizePolicy.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 43 "sipQtGuiQSizePolicy.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "sipQtGuiQSizePolicy.cpp"


extern "C" {static PyObject *meth_QSizePolicy_horizontalPolicy(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_horizontalPolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            QSizePolicy::Policy sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->horizontalPolicy();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSizePolicy_Policy);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_horizontalPolicy, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_verticalPolicy(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_verticalPolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            QSizePolicy::Policy sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->verticalPolicy();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSizePolicy_Policy);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_verticalPolicy, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_setHorizontalPolicy(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setHorizontalPolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::Policy a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSizePolicy, &sipCpp, sipType_QSizePolicy_Policy, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHorizontalPolicy(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setHorizontalPolicy, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_setVerticalPolicy(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setVerticalPolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::Policy a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSizePolicy, &sipCpp, sipType_QSizePolicy_Policy, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVerticalPolicy(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setVerticalPolicy, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_expandingDirections(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_expandingDirections(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            Qt::Orientations *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::Orientations(sipCpp->expandingDirections());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_Orientations,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_expandingDirections, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_setHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSizePolicy, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHeightForWidth(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setHeightForWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_hasHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_hasHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasHeightForWidth();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_hasHeightForWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_horizontalStretch(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_horizontalStretch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->horizontalStretch();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_horizontalStretch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_verticalStretch(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_verticalStretch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->verticalStretch();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_verticalStretch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_setHorizontalStretch(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setHorizontalStretch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QSizePolicy, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHorizontalStretch(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setHorizontalStretch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_setVerticalStretch(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setVerticalStretch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QSizePolicy, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVerticalStretch(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setVerticalStretch, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_transpose(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_transpose(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->transpose();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_transpose, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_controlType(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_controlType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizePolicy, &sipCpp))
        {
            QSizePolicy::ControlType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->controlType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSizePolicy_ControlType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_controlType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSizePolicy_setControlType(PyObject *, PyObject *);}
static PyObject *meth_QSizePolicy_setControlType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::ControlType a0;
        QSizePolicy *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSizePolicy, &sipCpp, sipType_QSizePolicy_ControlType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setControlType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizePolicy, sipName_setControlType, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QSizePolicy___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSizePolicy *sipCpp = reinterpret_cast<QSizePolicy *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSizePolicy, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSizePolicy::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QSizePolicy,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSizePolicy___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSizePolicy *sipCpp = reinterpret_cast<QSizePolicy *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSizePolicy, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSizePolicy::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QSizePolicy,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSizePolicy(void *, const sipTypeDef *);}
static void *cast_QSizePolicy(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSizePolicy)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSizePolicy(void *, int);}
static void release_QSizePolicy(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSizePolicy *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSizePolicy(void *, SIP_SSIZE_T, const void *);}
static void assign_QSizePolicy(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSizePolicy *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSizePolicy *>(sipSrc);
}


extern "C" {static void *array_QSizePolicy(SIP_SSIZE_T);}
static void *array_QSizePolicy(SIP_SSIZE_T sipNrElem)
{
    return new QSizePolicy[sipNrElem];
}


extern "C" {static void *copy_QSizePolicy(const void *, SIP_SSIZE_T);}
static void *copy_QSizePolicy(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSizePolicy(reinterpret_cast<const QSizePolicy *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSizePolicy(sipSimpleWrapper *);}
static void dealloc_QSizePolicy(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSizePolicy(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QSizePolicy(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSizePolicy(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSizePolicy *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSizePolicy();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QSizePolicy::Policy a0;
        QSizePolicy::Policy a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EE", sipType_QSizePolicy_Policy, &a0, sipType_QSizePolicy_Policy, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSizePolicy(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVariant * a0;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_variant,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1", sipType_QVariant,&a0, &a0State))
        {
#line 67 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qsizepolicy.sip"
        sipCpp = new QSizePolicy(qVariantValue<QSizePolicy>(*a0));
#line 590 "sipQtGuiQSizePolicy.cpp"
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return sipCpp;
        }
    }

    {
        QSizePolicy::Policy a0;
        QSizePolicy::Policy a1;
        QSizePolicy::ControlType a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EEE", sipType_QSizePolicy_Policy, &a0, sipType_QSizePolicy_Policy, &a1, sipType_QSizePolicy_ControlType, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSizePolicy(a0,a1,a2);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QSizePolicy * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSizePolicy, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSizePolicy(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSizePolicy[] = {
    {(void *)slot_QSizePolicy___ne__, ne_slot},
    {(void *)slot_QSizePolicy___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSizePolicy[] = {
    {SIP_MLNAME_CAST(sipName_controlType), meth_QSizePolicy_controlType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_expandingDirections), meth_QSizePolicy_expandingDirections, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasHeightForWidth), meth_QSizePolicy_hasHeightForWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_horizontalPolicy), meth_QSizePolicy_horizontalPolicy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_horizontalStretch), meth_QSizePolicy_horizontalStretch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setControlType), meth_QSizePolicy_setControlType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setHeightForWidth), meth_QSizePolicy_setHeightForWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setHorizontalPolicy), meth_QSizePolicy_setHorizontalPolicy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setHorizontalStretch), meth_QSizePolicy_setHorizontalStretch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setVerticalPolicy), meth_QSizePolicy_setVerticalPolicy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setVerticalStretch), meth_QSizePolicy_setVerticalStretch, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_transpose), meth_QSizePolicy_transpose, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_verticalPolicy), meth_QSizePolicy_verticalPolicy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_verticalStretch), meth_QSizePolicy_verticalStretch, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QSizePolicy[] = {
    {sipName_ButtonBox, QSizePolicy::ButtonBox, 440},
    {sipName_CheckBox, QSizePolicy::CheckBox, 440},
    {sipName_ComboBox, QSizePolicy::ComboBox, 440},
    {sipName_DefaultType, QSizePolicy::DefaultType, 440},
    {sipName_ExpandFlag, QSizePolicy::ExpandFlag, 443},
    {sipName_Expanding, QSizePolicy::Expanding, 442},
    {sipName_Fixed, QSizePolicy::Fixed, 442},
    {sipName_Frame, QSizePolicy::Frame, 440},
    {sipName_GroupBox, QSizePolicy::GroupBox, 440},
    {sipName_GrowFlag, QSizePolicy::GrowFlag, 443},
    {sipName_IgnoreFlag, QSizePolicy::IgnoreFlag, 443},
    {sipName_Ignored, QSizePolicy::Ignored, 442},
    {sipName_Label, QSizePolicy::Label, 440},
    {sipName_Line, QSizePolicy::Line, 440},
    {sipName_LineEdit, QSizePolicy::LineEdit, 440},
    {sipName_Maximum, QSizePolicy::Maximum, 442},
    {sipName_Minimum, QSizePolicy::Minimum, 442},
    {sipName_MinimumExpanding, QSizePolicy::MinimumExpanding, 442},
    {sipName_Preferred, QSizePolicy::Preferred, 442},
    {sipName_PushButton, QSizePolicy::PushButton, 440},
    {sipName_RadioButton, QSizePolicy::RadioButton, 440},
    {sipName_ShrinkFlag, QSizePolicy::ShrinkFlag, 443},
    {sipName_Slider, QSizePolicy::Slider, 440},
    {sipName_SpinBox, QSizePolicy::SpinBox, 440},
    {sipName_TabWidget, QSizePolicy::TabWidget, 440},
    {sipName_ToolButton, QSizePolicy::ToolButton, 440},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QSizePolicy = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSizePolicy,
        {0}
    },
    {
        sipNameNr_QSizePolicy,
        {0, 0, 1},
        14, methods_QSizePolicy,
        26, enummembers_QSizePolicy,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSizePolicy,
    init_QSizePolicy,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QSizePolicy,
    assign_QSizePolicy,
    array_QSizePolicy,
    copy_QSizePolicy,
    release_QSizePolicy,
    cast_QSizePolicy,
    0,
    0,
    0
},
    0,
    0,
    0
};
