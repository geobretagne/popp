<h1>Installation</h1>
<h2>Database</h2>
<p>To begin, create a PostgreSQL database, and set its encoding set to UTF-8.</p>
<p>Execute the followings commands in postgres command line :</p>
<ul>
<li>
 psql -d [DATABASE_NAME] -f /usr/share/postgresql/[POSTGRES_VERSION]/contrib/postgis-[POSTGIS_VERSION]/postgis.sql
</li>
<li>
psql -d [DATABASE_NAME] -f /usr/share/postgresql/[POSTGRES_VERSION]/contrib/postgis-[POSTGIS_VERSION]/spatial_ref_sys.sql

</li>
<li>
 psql -d [DATABASE_NAME] -f /usr/share/postgresql/[POSTGRES_VERSION]/contrib/postgis-[POSTGIS_VERSION]/postgis_comments.sql
</li>
</ul>
<p>Please note that folder names may slightly vary depending on your PostgreSQL/Postgis version.</p>
<h2>Drupal</h2>
<p>Unzip master to your web directory, and proceed to Drupal installation, using your brand new PostgreSQL database.</p>
<p>When it's done, click on "Modules" item onto top menu, and just activate "Popp Install" module.</p>
<p>Go now to front page. You will see some changes, and a popup inviting you to click on a link to finish installation.</p>
<p>Just let the wizard do some magic.</p>
<h2>Troubleshooting</h2>
<h3>I cannot activate POPP Install module</h3>
<p>Make sure you have correctly executed PostGIS procedures (see Database). If not, you can do it without starting over.</p>
<h3>Images aren't showing / there are Internal server errors everywhere</h3>
<p>Make sure .htaccess files (stored at /.htaccess, /sites/ and /sites/default/files/ folders) doesn't conflicts with your Apache configuration (ie. Options +FollowSymLinks, Options None ...)</p>
