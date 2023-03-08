from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('test', views.test, name='test'),
    path('test_1', views.test_1, name='test_1'),
]
