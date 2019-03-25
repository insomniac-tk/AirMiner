from django.shortcuts import render
from .models import Reading
from django.utils import timezone
# Create your views here.


def index(request):
	reading = Reading.objects.latest('reading_time')
	curr_time = timezone.now
	context = {'reading' : reading,'time':curr_time}
	return render(request,'dashboard/index.html',context)