from django.http import HttpResponse
from django.shortcuts import render

# Create your views here.

def test(request):
    return render(request , 'test.html')

def test_1(request):
    return render(request , 'account/test_1.html' , {'sum':10 , 'sum2':20} )
