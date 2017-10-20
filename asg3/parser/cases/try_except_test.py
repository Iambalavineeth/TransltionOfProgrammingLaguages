def timepass():
    pass


def divideWithFinally(x, y):
    try:
        result = (x / y)
    except ZeroDivisionError:
        print "division by zero!"
    finally:
        print "function ended"


def TryWithoutFinally(x, y):
    try:
        result = x / y
    except ZeroDivisionError:
        print "division by zero!"
    else:
        print "nothing!"
    finally:
        print "In finally"

def test1():
    try:
        pass
    except ExplicitException:
        pass

    try:
        pass
    except ExplicitException:
        pass
    finally:
        pass

def test2():
    try:
        try:
            pass
        except ExplicitException:
            pass
    except ExplicitException:
        pass
    finally:
        pass

    try:
        try:
            pass
        except ExplicitException:
            pass
    except ExplicitException:
        try:
            pass
        except ExplicitException:
            pass

    try:
        pass
    except ExplicitException:
        pass
    finally:
        pass

    try:
        pass
    except ExplicitException:
        pass

def test3():
    try:
        pass
    except:
        pass

    try:
        pass
    except:
        pass
    finally:
        pass

    try:
        pass
    except:
        pass

def myfunc(a):
    try:
        if len(a) < 10:
            a[0] = 10
    except ValueError:
        print "ValueError"
    except IndexError:
        print "IndexError"
    finally:
        if a[2] > 10:
            print "Finally, some good news"
        pass
    if a[1] > 10:
        print "WOW"


def myf(a):
    try:
        a[0] = 10
    except ValueError:
        print "ValueError"
    except IndexError:
        print "IndexError"
    else:
        print "NoError"
    if a[i] > 10:
        print "in if"

def check_if():
    if True:
        if False:
            pass
        elif True:
            pass
        else:
            pass
