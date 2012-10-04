/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
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

#include "sipAPIQtCore.h"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "sipQtCoreQtInputMethodHints.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtCoreQtInputMethodHints.cpp"


extern "C" {static int slot_Qt_InputMethodHints___bool__(PyObject *);}
static int slot_Qt_InputMethodHints___bool__(PyObject *sipSelf)
{
    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtCoreQtInputMethodHints.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::InputMethodHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 331 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtCoreQtInputMethodHints.cpp"
            sipReleaseType(const_cast<Qt::InputMethodHints *>(a0),sipType_Qt_InputMethodHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_InputMethodHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::InputMethodHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 326 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtCoreQtInputMethodHints.cpp"
            sipReleaseType(const_cast<Qt::InputMethodHints *>(a0),sipType_Qt_InputMethodHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_InputMethodHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___invert__(PyObject *);}
static PyObject *slot_Qt_InputMethodHints___invert__(PyObject *sipSelf)
{
    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::InputMethodHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::InputMethodHints(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodHints * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodHints, &a0, &a0State, &a1))
        {
            Qt::InputMethodHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::InputMethodHints((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodHints * a0;
        int a0State = 0;
        Qt::InputMethodHints * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_InputMethodHints, &a0, &a0State, sipType_Qt_InputMethodHints, &a1, &a1State))
        {
            Qt::InputMethodHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::InputMethodHints((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);
            sipReleaseType(a1,sipType_Qt_InputMethodHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    {
        Qt::InputMethodHints * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodHints, &a0, &a0State, &a1))
        {
            Qt::InputMethodHints *sipRes = 0;

#line 320 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new Qt::InputMethodHints(*a0 ^ a1);
#line 232 "sipQtCoreQtInputMethodHints.cpp"
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodHints * a0;
        int a0State = 0;
        Qt::InputMethodHints * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_InputMethodHints, &a0, &a0State, sipType_Qt_InputMethodHints, &a1, &a1State))
        {
            Qt::InputMethodHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::InputMethodHints((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);
            sipReleaseType(a1,sipType_Qt_InputMethodHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    {
        Qt::InputMethodHints * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodHints, &a0, &a0State, &a1))
        {
            Qt::InputMethodHints *sipRes = 0;

#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new Qt::InputMethodHints(*a0 | a1);
#line 284 "sipQtCoreQtInputMethodHints.cpp"
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___int__(PyObject *);}
static PyObject *slot_Qt_InputMethodHints___int__(PyObject *sipSelf)
{
    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::InputMethodHints::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::InputMethodHints::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::InputMethodHints::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_Qt_InputMethodHints(void *, const sipTypeDef *);}
static void *cast_Qt_InputMethodHints(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_Qt_InputMethodHints)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_InputMethodHints(void *, int);}
static void release_Qt_InputMethodHints(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Qt::InputMethodHints *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_InputMethodHints(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_InputMethodHints(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::InputMethodHints *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::InputMethodHints *>(sipSrc);
}


extern "C" {static void *array_Qt_InputMethodHints(SIP_SSIZE_T);}
static void *array_Qt_InputMethodHints(SIP_SSIZE_T sipNrElem)
{
    return new Qt::InputMethodHints[sipNrElem];
}


extern "C" {static void *copy_Qt_InputMethodHints(const void *, SIP_SSIZE_T);}
static void *copy_Qt_InputMethodHints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::InputMethodHints(reinterpret_cast<const Qt::InputMethodHints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_InputMethodHints(sipSimpleWrapper *);}
static void dealloc_Qt_InputMethodHints(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_InputMethodHints(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_Qt_InputMethodHints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_Qt_InputMethodHints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::InputMethodHints *sipCpp = 0;

    {
        const Qt::InputMethodHints * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::InputMethodHints(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<Qt::InputMethodHints *>(a0),sipType_Qt_InputMethodHints,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::InputMethodHints(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::InputMethodHints();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_InputMethodHints(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_InputMethodHints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::InputMethodHints **sipCppPtr = reinterpret_cast<Qt::InputMethodHints **>(sipCppPtrV);

#line 341 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::InputMethodHints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHint)) ||
            sipCanConvertToType(sipPy, sipType_Qt_InputMethodHints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHint)))
{
    *sipCppPtr = new Qt::InputMethodHints(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::InputMethodHints *>(sipConvertToType(sipPy, sipType_Qt_InputMethodHints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 577 "sipQtCoreQtInputMethodHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_InputMethodHints[] = {
    {(void *)slot_Qt_InputMethodHints___bool__, bool_slot},
    {(void *)slot_Qt_InputMethodHints___ne__, ne_slot},
    {(void *)slot_Qt_InputMethodHints___eq__, eq_slot},
    {(void *)slot_Qt_InputMethodHints___invert__, invert_slot},
    {(void *)slot_Qt_InputMethodHints___and__, and_slot},
    {(void *)slot_Qt_InputMethodHints___xor__, xor_slot},
    {(void *)slot_Qt_InputMethodHints___or__, or_slot},
    {(void *)slot_Qt_InputMethodHints___int__, int_slot},
    {(void *)slot_Qt_InputMethodHints___ixor__, ixor_slot},
    {(void *)slot_Qt_InputMethodHints___ior__, ior_slot},
    {(void *)slot_Qt_InputMethodHints___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_Qt_InputMethodHints = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__InputMethodHints,
        {0}
    },
    {
        sipNameNr_InputMethodHints,
        {262, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_InputMethodHints,
    init_Qt_InputMethodHints,
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
    dealloc_Qt_InputMethodHints,
    assign_Qt_InputMethodHints,
    array_Qt_InputMethodHints,
    copy_Qt_InputMethodHints,
    release_Qt_InputMethodHints,
    cast_Qt_InputMethodHints,
    convertTo_Qt_InputMethodHints,
    0,
    0
},
    0,
    1,
    0
};
