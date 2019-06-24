/*
 * This source file is part of RmlUi, the HTML/CSS Interface Middleware
 *
 * For the latest information, see http://github.com/mikke89/RmlUi
 *
 * Copyright (c) 2008-2010 CodePoint Ltd, Shift Technology Ltd
 * Copyright (c) 2019 The RmlUi Team, and contributors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

static const char* info_rcss = R"RCSS(
body
{
	width: 320dp;
	min-width: 320dp;
	min-height: 150dp;
	margin-top: 42dp;
	margin-right: 20dp;
	margin-left: auto;
}
div#content
{
   height: auto;
	max-height: 650dp;
}
div#content div h2
{
	padding-left: 5dp;
}
div#content div div
{
	font-size: 12dp;
	padding-left: 10dp;
}
div#ancestors p:hover,
div#children p:hover
{
	background-color: #ddd;
}
scrollbarvertical
{
	scrollbar-margin: 0px;
}
)RCSS";

static const char* info_rml = R"RML(
<h1>
	<handle id="position_handle" move_target="#document"/>
	<div id="close_button">X</div>
	<div id="title-content" style="width: 200dp;">Element Information</div>
</h1>
<div id="content">
	<div id ="attributes">
		<h2>Attributes</h2>
		<div id="attributes-content">
		</div>
	</div>
	<div id ="properties">
		<h2>Properties</h2>
		<div id="properties-content">
		</div>
	</div>
	<div id ="events">
		<h2>Events</h2>
		<div id="events-content">
		</div>
	</div>
	<div id ="position">
		<h2>Position</h2>
		<div id="position-content">
		</div>
	</div>
	<div id ="ancestors">
		<h2>Ancestors</h2>
		<div id="ancestors-content">
		</div>
	</div>
	<div id ="children">
		<h2>Children</h2>
		<div id="children-content">
		</div>
	</div>
</div>
)RML";
