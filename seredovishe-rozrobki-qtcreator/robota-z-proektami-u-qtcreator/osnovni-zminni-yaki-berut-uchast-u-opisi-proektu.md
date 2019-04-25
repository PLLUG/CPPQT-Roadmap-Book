# Основні змінні, які беруть участь у описі проекту

<table>
  <thead>
    <tr>
      <th style="text-align:left">&#x417;&#x43C;&#x456;&#x43D;&#x43D;&#x430;</th>
      <th style="text-align:left">&#x41E;&#x43F;&#x438;&#x441;</th>
      <th style="text-align:left">&#x41F;&#x440;&#x438;&#x43A;&#x43B;&#x430;&#x434;</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align:left"><code>CONFIG</code>
      </td>
      <td style="text-align:left">&#x420;&#x456;&#x437;&#x43D;&#x43E;&#x43C;&#x430;&#x43D;&#x456;&#x442;&#x43D;&#x456;
        &#x43D;&#x430;&#x43B;&#x430;&#x448;&#x442;&#x443;&#x432;&#x430;&#x43D;&#x43D;&#x44F;
        &#x43A;&#x43E;&#x43D;&#x444;&#x456;&#x433;&#x443;&#x440;&#x430;&#x446;&#x456;&#x457;
        &#x43F;&#x440;&#x43E;&#x435;&#x43A;&#x442;&#x443; (&#x43D;&#x430;&#x43F;&#x440;&#x438;&#x43A;&#x43B;&#x430;&#x434;:
        &#x440;&#x435;&#x436;&#x438;&#x43C; &#x432;&#x456;&#x434;&#x43B;&#x430;&#x433;&#x43E;&#x434;&#x436;&#x435;&#x43D;&#x43D;&#x44F;,
        &#x432;&#x438;&#x432;&#x456;&#x434; &#x43F;&#x43E;&#x43F;&#x435;&#x440;&#x435;&#x434;&#x436;&#x435;&#x43D;&#x44C;,
        &#x43A;&#x43E;&#x43C;&#x43F;&#x456;&#x43B;&#x44F;&#x446;&#x456;&#x44F;
        &#x434;&#x438;&#x43D;&#x430;&#x43C;&#x456;&#x447;&#x43D;&#x43E;&#x457;
        &#x431;&#x456;&#x431;&#x43B;&#x456;&#x43E;&#x442;&#x435;&#x43A;&#x438;
        &#x442;&#x43E;&#x449;&#x43E;).</td>
      <td style="text-align:left">
        <p><code>CONFIG += dll \</code>
        </p>
        <p><code>plugin \</code>
        </p>
        <p><code>warn_on release</code>
        </p>
      </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>DEFINES</code>
      </td>
      <td style="text-align:left">&#x41C;&#x430;&#x43A;&#x440;&#x43E;&#x432;&#x438;&#x437;&#x43D;&#x430;&#x447;&#x435;&#x43D;&#x43D;&#x44F;
        &#x443; &#x43F;&#x440;&#x43E;&#x435;&#x43A;&#x442;&#x456;. &#x41F;&#x440;&#x430;&#x446;&#x44E;&#x454;
        &#x442;&#x430;&#x43A; &#x441;&#x430;&#x43C;&#x43E;, &#x44F;&#x43A; &#x434;&#x438;&#x440;&#x435;&#x43A;&#x442;&#x438;&#x432;&#x430;
        &#x43F;&#x440;&#x435;&#x43F;&#x440;&#x43E;&#x446;&#x435;&#x441;&#x43E;&#x440;&#x430; <code>#define</code>
      </td>
      <td style="text-align:left">
        <p><code>DEFINES += \</code>
        </p>
        <p><code>DEBUG_OUTPUT \</code>
        </p>
        <p><code>CUSTOM_DEFINE</code>
        </p>
      </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>DESTDIR</code>
      </td>
      <td style="text-align:left">&#x428;&#x43B;&#x44F;&#x445; &#x434;&#x43E; &#x442;&#x435;&#x43A;&#x438;,
        &#x434;&#x435; &#x431;&#x443;&#x434;&#x435; &#x441;&#x442;&#x432;&#x43E;&#x440;&#x435;&#x43D;&#x43E;
        &#x432;&#x438;&#x43A;&#x43E;&#x43D;&#x443;&#x432;&#x430;&#x43D;&#x438;&#x439;
        &#x444;&#x430;&#x439;&#x43B;.</td>
      <td style="text-align:left"><code>DESTDIR = ./bin</code>
      </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>INCLUDEPATH</code>
      </td>
      <td style="text-align:left">&#x428;&#x43B;&#x44F;&#x445;&#x438; &#x434;&#x43E; &#x442;&#x435;&#x43A;
        &#x437; &#x444;&#x430;&#x439;&#x43B;&#x430;&#x43C;&#x438; <code>*.h</code>.</td>
      <td
      style="text-align:left">
        <p><code>INCLUDEPATH += \</code>
        </p>
        <p><code>./includes \</code>
        </p>
        <p><code>./my_header_files</code>
        </p>
        </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>FORMS</code>
      </td>
      <td style="text-align:left">&#x424;&#x430;&#x439;&#x43B;&#x438; &#x444;&#x43E;&#x440;&#x43C; Qt Designer</td>
      <td
      style="text-align:left">
        <p><code>FORMS += \</code>
        </p>
        <p><code>mainwindow.ui</code>
        </p>
        </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>HEADERS</code>
      </td>
      <td style="text-align:left">&#x417;&#x430;&#x433;&#x43E;&#x43B;&#x43E;&#x432;&#x43A;&#x43E;&#x432;&#x456;
        &#x444;&#x430;&#x439;&#x43B;&#x438; &#x43F;&#x440;&#x43E;&#x433;&#x440;&#x430;&#x43C;&#x438; <code>*.h</code>
      </td>
      <td style="text-align:left">
        <p><code>HEADERS += \</code>
        </p>
        <p><code>mainwindow.h</code>
        </p>
      </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>LIBS</code>
      </td>
      <td style="text-align:left">&#x428;&#x43B;&#x44F;&#x445;&#x438; &#x434;&#x43E; &#x434;&#x438;&#x43D;&#x430;&#x43C;&#x456;&#x447;&#x43D;&#x438;&#x445;
        &#x431;&#x456;&#x431;&#x43B;&#x456;&#x43E;&#x442;&#x435;&#x43A; &#x442;&#x430;
        &#x431;&#x456;&#x431;&#x43B;&#x456;&#x43E;&#x442;&#x435;&#x43A;&#x438;,
        &#x44F;&#x43A;&#x456; &#x432;&#x438;&#x43A;&#x43E;&#x440;&#x438;&#x441;&#x442;&#x43E;&#x432;&#x443;&#x44E;&#x442;&#x44C;
        &#x443; &#x43F;&#x440;&#x43E;&#x433;&#x440;&#x430;&#x43C;&#x456;.</td>
      <td
      style="text-align:left">
        <p><code>LIBS += -L./libs\</code>
        </p>
        <p><code>-L./my_libs \</code>
        </p>
        <p><code>-lmycustomlib</code>
        </p>
        </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>QT</code>
      </td>
      <td style="text-align:left">&#x41C;&#x43E;&#x434;&#x443;&#x43B;&#x456; Qt, &#x44F;&#x43A;&#x456; &#x432;&#x438;&#x43A;&#x43E;&#x440;&#x438;&#x441;&#x442;&#x43E;&#x432;&#x443;&#x44E;&#x442;&#x44C;
        &#x443; &#x43F;&#x440;&#x43E;&#x433;&#x440;&#x430;&#x43C;&#x456;</td>
      <td
      style="text-align:left">
        <p><code>QT += core gui \</code>
        </p>
        <p><code>widgets network \</code>
        </p>
        <p><code>sql xml</code>
        </p>
        </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>RESOURCES</code>
      </td>
      <td style="text-align:left">&#x424;&#x430;&#x439;&#x43B; &#x440;&#x435;&#x441;&#x443;&#x440;&#x441;&#x456;&#x432;.</td>
      <td
      style="text-align:left">
        <p><code>RESOURCES = \</code>
        </p>
        <p><code>resources.qrc</code>
        </p>
        </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>SOURCES</code>
      </td>
      <td style="text-align:left">&#x412;&#x438;&#x445;&#x456;&#x434;&#x43D;&#x456; &#x442;&#x435;&#x43A;&#x441;&#x442;&#x438;
        &#x43F;&#x440;&#x43E;&#x433;&#x440;&#x430;&#x43C;&#x438; <code>*.cpp</code>.</td>
      <td
      style="text-align:left">
        <p><code>SOURCES += main.cpp \</code>
        </p>
        <p><code>mainwindow.cpp</code>
        </p>
        </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>TARGET</code>
      </td>
      <td style="text-align:left">&#x41D;&#x430;&#x437;&#x432;&#x430; &#x432;&#x438;&#x43A;&#x43E;&#x43D;&#x443;&#x432;&#x430;&#x43D;&#x43E;&#x433;&#x43E;
        &#x444;&#x430;&#x439;&#x43B;&#x443; &#x447;&#x438; &#x434;&#x438;&#x43D;&#x430;&#x43C;&#x456;&#x447;&#x43D;&#x43E;&#x457;
        &#x431;&#x456;&#x431;&#x43B;&#x456;&#x43E;&#x442;&#x435;&#x43A;&#x438;</td>
      <td
      style="text-align:left">
        <p><code>TARGET = \</code>
        </p>
        <p><code>MyFirstProject</code>
        </p>
        </td>
    </tr>
    <tr>
      <td style="text-align:left"><code>TEMPLATE</code>
      </td>
      <td style="text-align:left">
        <p>&#x422;&#x438;&#x43F; &#x43F;&#x440;&#x43E;&#x435;&#x43A;&#x442;&#x443;
          (&#x43F;&#x440;&#x438;&#x43A;&#x43B;&#x430;&#x434;&#x43D;&#x430; &#x43F;&#x440;&#x43E;&#x433;&#x440;&#x430;&#x43C;&#x430;,
          &#x431;&#x456;&#x431;&#x43B;&#x456;&#x43E;&#x442;&#x435;&#x43A;&#x430;,
          &#x43F;&#x440;&#x43E;&#x435;&#x43A;&#x442;</p>
        <p>&#x441;&#x43A;&#x43B;&#x430;&#x434;&#x435;&#x43D;&#x438;&#x439; &#x437;
          &#x43F;&#x456;&#x434;&#x43F;&#x440;&#x43E;&#x435;&#x43A;&#x442;&#x456;&#x432;
          &#x442;&#x43E;&#x449;&#x43E;).</p>
      </td>
      <td style="text-align:left"><code>TEMPLATE = lib</code>
      </td>
    </tr>
  </tbody>
</table>

