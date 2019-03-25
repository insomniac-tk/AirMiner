from django.shortcuts import render
from .models import Reading

# Create your views here.


def index(request):
	reading = Reading.objects.latest('reading_time')
	context = {'reading' : reading}
	return render(request,'dashboard/index.html',context)