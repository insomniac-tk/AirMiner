# Generated by Django 2.1.2 on 2019-03-24 20:06

import datetime
from django.db import migrations, models
from django.utils.timezone import utc


class Migration(migrations.Migration):

    dependencies = [
        ('dashboard', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='reading',
            name='reading_time',
            field=models.DateTimeField(default=datetime.datetime(2019, 3, 24, 20, 6, 38, 38270, tzinfo=utc)),
        ),
    ]