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

#line 813 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 39 "sipQtCoreQSystemLocale.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 43 "sipQtCoreQSystemLocale.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 46 "sipQtCoreQSystemLocale.cpp"


class sipQSystemLocale : public QSystemLocale
{
public:
    sipQSystemLocale();
    sipQSystemLocale(const QSystemLocale&);
    virtual ~sipQSystemLocale();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QVariant query(QSystemLocale::QueryType,QVariant) const;
    QLocale fallbackLocale() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSystemLocale(const sipQSystemLocale &);
    sipQSystemLocale &operator = (const sipQSystemLocale &);

    char sipPyMethods[2];
};

sipQSystemLocale::sipQSystemLocale(): QSystemLocale(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSystemLocale::sipQSystemLocale(const QSystemLocale& a0): QSystemLocale(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSystemLocale::~sipQSystemLocale()
{
    sipCommonDtor(sipPySelf);
}

QVariant sipQSystemLocale::query(QSystemLocale::QueryType a0,QVariant a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_query);

    if (!meth)
        return QSystemLocale::query(a0,a1);

    extern QVariant sipVH_QtCore_30(sip_gilstate_t,PyObject *,QSystemLocale::QueryType,QVariant);

    return sipVH_QtCore_30(sipGILState,meth,a0,a1);
}

QLocale sipQSystemLocale::fallbackLocale() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_fallbackLocale);

    if (!meth)
        return QSystemLocale::fallbackLocale();

    extern QLocale sipVH_QtCore_29(sip_gilstate_t,PyObject *);

    return sipVH_QtCore_29(sipGILState,meth);
}


extern "C" {static PyObject *meth_QSystemLocale_query(PyObject *, PyObject *);}
static PyObject *meth_QSystemLocale_query(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QSystemLocale::QueryType a0;
        QVariant * a1;
        int a1State = 0;
        QSystemLocale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QSystemLocale, &sipCpp, sipType_QSystemLocale_QueryType, &a0, sipType_QVariant,&a1, &a1State))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant((sipSelfWasArg ? sipCpp->QSystemLocale::query(a0,*a1) : sipCpp->query(a0,*a1)));
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QVariant,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemLocale, sipName_query, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSystemLocale_fallbackLocale(PyObject *, PyObject *);}
static PyObject *meth_QSystemLocale_fallbackLocale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QSystemLocale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSystemLocale, &sipCpp))
        {
            QLocale *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLocale((sipSelfWasArg ? sipCpp->QSystemLocale::fallbackLocale() : sipCpp->fallbackLocale()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLocale,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSystemLocale, sipName_fallbackLocale, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSystemLocale(void *, const sipTypeDef *);}
static void *cast_QSystemLocale(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSystemLocale)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSystemLocale(void *, int);}
static void release_QSystemLocale(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSystemLocale *>(sipCppV);
    else
        delete reinterpret_cast<QSystemLocale *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSystemLocale(void *, SIP_SSIZE_T, const void *);}
static void assign_QSystemLocale(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSystemLocale *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSystemLocale *>(sipSrc);
}


extern "C" {static void *array_QSystemLocale(SIP_SSIZE_T);}
static void *array_QSystemLocale(SIP_SSIZE_T sipNrElem)
{
    return new QSystemLocale[sipNrElem];
}


extern "C" {static void *copy_QSystemLocale(const void *, SIP_SSIZE_T);}
static void *copy_QSystemLocale(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSystemLocale(reinterpret_cast<const QSystemLocale *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSystemLocale(sipSimpleWrapper *);}
static void dealloc_QSystemLocale(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSystemLocale *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSystemLocale(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QSystemLocale(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSystemLocale(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSystemLocale *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSystemLocale();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSystemLocale * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSystemLocale, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSystemLocale(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSystemLocale[] = {
    {SIP_MLNAME_CAST(sipName_fallbackLocale), meth_QSystemLocale_fallbackLocale, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_query), meth_QSystemLocale_query, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QSystemLocale[] = {
    {sipName_AMText, QSystemLocale::AMText, 199},
    {sipName_CountryId, QSystemLocale::CountryId, 199},
    {sipName_DateFormatLong, QSystemLocale::DateFormatLong, 199},
    {sipName_DateFormatShort, QSystemLocale::DateFormatShort, 199},
    {sipName_DateTimeFormatLong, QSystemLocale::DateTimeFormatLong, 199},
    {sipName_DateTimeFormatShort, QSystemLocale::DateTimeFormatShort, 199},
    {sipName_DateTimeToStringLong, QSystemLocale::DateTimeToStringLong, 199},
    {sipName_DateTimeToStringShort, QSystemLocale::DateTimeToStringShort, 199},
    {sipName_DateToStringLong, QSystemLocale::DateToStringLong, 199},
    {sipName_DateToStringShort, QSystemLocale::DateToStringShort, 199},
    {sipName_DayNameLong, QSystemLocale::DayNameLong, 199},
    {sipName_DayNameShort, QSystemLocale::DayNameShort, 199},
    {sipName_DecimalPoint, QSystemLocale::DecimalPoint, 199},
    {sipName_GroupSeparator, QSystemLocale::GroupSeparator, 199},
    {sipName_LanguageId, QSystemLocale::LanguageId, 199},
    {sipName_MeasurementSystem, QSystemLocale::MeasurementSystem, 199},
    {sipName_MonthNameLong, QSystemLocale::MonthNameLong, 199},
    {sipName_MonthNameShort, QSystemLocale::MonthNameShort, 199},
    {sipName_NegativeSign, QSystemLocale::NegativeSign, 199},
    {sipName_PMText, QSystemLocale::PMText, 199},
    {sipName_PositiveSign, QSystemLocale::PositiveSign, 199},
    {sipName_TimeFormatLong, QSystemLocale::TimeFormatLong, 199},
    {sipName_TimeFormatShort, QSystemLocale::TimeFormatShort, 199},
    {sipName_TimeToStringLong, QSystemLocale::TimeToStringLong, 199},
    {sipName_TimeToStringShort, QSystemLocale::TimeToStringShort, 199},
    {sipName_ZeroDigit, QSystemLocale::ZeroDigit, 199},
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QSystemLocale = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSystemLocale,
        {0}
    },
    {
        sipNameNr_QSystemLocale,
        {0, 0, 1},
        2, methods_QSystemLocale,
        26, enummembers_QSystemLocale,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QSystemLocale,
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
    dealloc_QSystemLocale,
    assign_QSystemLocale,
    array_QSystemLocale,
    copy_QSystemLocale,
    release_QSystemLocale,
    cast_QSystemLocale,
    0,
    0,
    0
},
    0,
    0,
    0
};
