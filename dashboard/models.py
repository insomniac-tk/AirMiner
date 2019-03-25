from django.db import models
from django.utils import timezone

# Create your models here.

class Reading(models.Model):
    reading_time = models.DateTimeField(default=timezone.now)
    ppm_value = models.DecimalField(max_digits=5,decimal_places=2)

    def Threshold(self):
    	return self.ppm_value >= 9

def __str__(self):
        return self.ppm_value