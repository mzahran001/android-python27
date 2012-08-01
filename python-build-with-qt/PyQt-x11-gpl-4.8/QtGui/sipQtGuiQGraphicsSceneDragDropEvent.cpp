/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
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

#line 198 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 39 "sipQtGuiQGraphicsSceneDragDropEvent.cpp"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 43 "sipQtGuiQGraphicsSceneDragDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 46 "sipQtGuiQGraphicsSceneDragDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 49 "sipQtGuiQGraphicsSceneDragDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 52 "sipQtGuiQGraphicsSceneDragDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 55 "sipQtGuiQGraphicsSceneDragDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 58 "sipQtGuiQGraphicsSceneDragDropEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 61 "sipQtGuiQGraphicsSceneDragDropEvent.cpp"
#line 92 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 64 "sipQtGuiQGraphicsSceneDragDropEvent.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 67 "sipQtGuiQGraphicsSceneDragDropEvent.cpp"


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_pos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->scenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_scenePos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->screenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_screenPos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Qt::MouseButtons *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::MouseButtons(sipCpp->buttons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_buttons, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Qt::KeyboardModifiers *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::KeyboardModifiers(sipCpp->modifiers());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_modifiers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_possibleActions(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_possibleActions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Qt::DropActions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::DropActions(sipCpp->possibleActions());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_possibleActions, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_proposedAction(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_proposedAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->proposedAction();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_proposedAction, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_acceptProposedAction(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_acceptProposedAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->acceptProposedAction();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_acceptProposedAction, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_dropAction(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_dropAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->dropAction();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_dropAction, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_setDropAction(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_setDropAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropAction a0;
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp, sipType_Qt_DropAction, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDropAction(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_setDropAction, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_source(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            QWidget *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->source();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_source, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_mimeData(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_mimeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            const QMimeData *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mimeData();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QMimeData *>(sipRes),sipType_QMimeData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_mimeData, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsSceneDragDropEvent(void *, const sipTypeDef *);}
static void *cast_QGraphicsSceneDragDropEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsSceneDragDropEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsSceneEvent)->ctd_cast((QGraphicsSceneEvent *)(QGraphicsSceneDragDropEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneDragDropEvent(void *, int);}
static void release_QGraphicsSceneDragDropEvent(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsSceneDragDropEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsSceneDragDropEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneDragDropEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneDragDropEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneDragDropEvent[] = {{196, 255, 1}};


static PyMethodDef methods_QGraphicsSceneDragDropEvent[] = {
    {SIP_MLNAME_CAST(sipName_acceptProposedAction), meth_QGraphicsSceneDragDropEvent_acceptProposedAction, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_buttons), meth_QGraphicsSceneDragDropEvent_buttons, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_dropAction), meth_QGraphicsSceneDragDropEvent_dropAction, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mimeData), meth_QGraphicsSceneDragDropEvent_mimeData, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QGraphicsSceneDragDropEvent_modifiers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pos), meth_QGraphicsSceneDragDropEvent_pos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_possibleActions), meth_QGraphicsSceneDragDropEvent_possibleActions, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_proposedAction), meth_QGraphicsSceneDragDropEvent_proposedAction, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QGraphicsSceneDragDropEvent_scenePos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QGraphicsSceneDragDropEvent_screenPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDropAction), meth_QGraphicsSceneDragDropEvent_setDropAction, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_source), meth_QGraphicsSceneDragDropEvent_source, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsSceneDragDropEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneDragDropEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneDragDropEvent,
        {0, 0, 1},
        12, methods_QGraphicsSceneDragDropEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsSceneDragDropEvent,
    0,
    0,
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
    dealloc_QGraphicsSceneDragDropEvent,
    0,
    0,
    0,
    release_QGraphicsSceneDragDropEvent,
    cast_QGraphicsSceneDragDropEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};
