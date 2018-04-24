FROM tutum/a-php
ADD opencart/upload /app


RUN mv /app/config-dist.php /app/config.php
RUN mv /app/admin/config-dist.php  /app/admin/config.php
RUN chmod 0755 /app/system/storage/cache/
RUN chmod 0755 /app/system/storage/download/
RUN chmod 0755 /app/system/storage/logs/
RUN chmod 0755 /app/system/storage/modification/
RUN chmod 0755 /app/system/storage/session/
RUN chmod 0755 /app/system/storage/upload/
RUN chmod 0755 /app/system/storage/vendor/
RUN chmod 0755 /app/image/
RUN chmod 0755 /app/image/cache/
RUN chmod 0755 /app/image/catalog/
RUN chmod 0755 /app/config.php
RUN chmod 0755 /app/admin/config.php
