
from django.contrib import admin
from django.urls import path, include
from demo_project.views import *

urlpatterns = [
    path('admin/', admin.site.urls),
    path('contact/', show_contacts),
    path('', home),
    path('demo_app/', include("demo_app.urls"))
]
