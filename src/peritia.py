#! /usr/bin/python3

"""
    Author: Israel Dryer
    Modified: 2021-12-12
    Adapted from: https://images.idgesg.net/images/article/2018/08/cw_win10_utilities_ss_02-100769136-orig.jpg
"""
from pathlib import Path
import ttkbootstrap as ttk
from ttkbootstrap.constants import *
from ttkbootstrap.dialogs import Messagebox, Querybox

PATH = Path(__file__).parent / 'assets'


class Cleaner(ttk.Frame):

    def __init__(self, master, **kwargs):
        super().__init__(master, **kwargs)
        self.pack(fill=BOTH, expand=YES)

        # application images
        self.images = [
            ttk.PhotoImage(
                name='logo',
                file=PATH / 'peritia-logo.png'),
            ttk.PhotoImage(
                name='a',
                file=PATH / 'icons8_broom_64px.png'),
            ttk.PhotoImage(
                name='registry',
                file=PATH / 'icons8_registry_editor_64px.png'),
            ttk.PhotoImage(
                name='b',
               file=PATH / 'icons8_wrench_64px.png'),
            ttk.PhotoImage(
                name='options',
                file=PATH / 'icons8_settings_64px.png'),
            ttk.PhotoImage(
                name='privacy',
                file=PATH / 'icons8_spy_80px.png'),
            ttk.PhotoImage(
                name='junk',
                file=PATH / 'icons8_trash_can_80px.png'),
            ttk.PhotoImage(
                name='protect',
                file=PATH / 'icons8_protect_40px.png'),
            ttk.PhotoImage(
                    name="$_-|about",
                    file=PATH / 'icons8-about-50.png'),
            ttk.PhotoImage(
                name='$_-|braille-logo',
                file=PATH / 'braille-logo.png'),
            ttk.PhotoImage(
                name='$_-|data-analysis-button',
                file=PATH / 'data-analysis.png'),
            ttk.PhotoImage(
                name='$_-|exit',
                file=PATH / 'icons8-exit-sign-48.png'),
            ttk.PhotoImage(
                name='$_-|features',
                file=PATH / 'icons8-extra-features-48.png'),
            ttk.PhotoImage(
                name='$_-|fingers',
                file=PATH / '_fingers.png'),
            ttk.PhotoImage(
                name="$_-|games-button",
                file=PATH / 'icons8-game-controller-40.png'),
            ttk.PhotoImage(
                name="$_-|info",
                file=PATH / 'more-info.png'),
            ttk.PhotoImage(
                name="$_-|small-blue-diamond-button",
                file=PATH/ 'icons8-small-blue-diamond-48.png'),

            ttk.PhotoImage(
                name="$_-|summary",
                file=PATH / '_summary.png'),

            ttk.PhotoImage(
                    name="$_-|t2s-button",
                    file=PATH /'text-to-speech.png'),
            ttk.PhotoImage(
                name="$_-|tools",
                file=PATH / '_tools.png')
            ]

        # header
        hdr_frame = ttk.Frame(self, padding=10, bootstyle=SECONDARY)
        hdr_frame.grid(row=0, column=0, columnspan=3, sticky=EW)

        hdr_label = ttk.Label(
            master=hdr_frame,
            image='logo',
            bootstyle=(INVERSE, SECONDARY)
        )
        hdr_label.pack(side=LEFT)

        logo_text = ttk.Label(
            master=hdr_frame,
            text='Peritia',
            font=('TkDefaultFixed', 30),
            bootstyle=(INVERSE, SECONDARY)
        )
        logo_text.pack(side=LEFT, padx=10)

        # THEME SELECTOR
        style = ttk.Style()
        theme_names = style.theme_names()
        theme_selection = ttk.Frame(hdr_frame, padding=(10, 10, 10, 0))
        theme_selection.pack(padx=10)#fill=X, expand=YES)

        lbl = ttk.Label(theme_selection, text="Select a theme:")

        theme_cbo = ttk.Combobox(
                master=theme_selection,
                text=style.theme.name,
                values=theme_names
                )

        theme_cbo.pack(padx=10, side=RIGHT)
        theme_cbo.current(theme_names.index(style.theme.name))
        lbl.pack(side=RIGHT)

        ttk.Separator(hdr_frame).pack(fill=X, pady=10, padx=10)

        def change_theme(e):
            t = cbo.get()
            style.theme_use(t)
          # not using the .configure func since ....
            theme_cbo.selection_clear()
           # default.focus_set()

        theme_cbo.bind('<<ComboboxSelected>>', change_theme)

        cbo = ttk.Combobox(
        #master=theme_selection, #hdr_frame,
        text=style.theme.name,
        values=theme_names,
        exportselection=False
        )
        cbo.pack(fill=X, pady=5)
        cbo.current(theme_names.index(style.theme.name))


        # action buttons
        action_frame = ttk.Frame(self)
        action_frame.grid(row=1, column=0, sticky=W)#NSEW)

        # SUMMARY BUTTON

        def __info():
            import platform
            import random
            from datetime import date, datetime
            pla = platform.system()

            # Textual month, day and year

            today = date.today()
            d = today.strftime("%B %d, %Y")
            current_time = datetime.now()
            _quotes = ["Disability is a matter of perception. If you can do just one thing well, you’re needed by someone.\n-Martina Navratilova", "Start by doing what’s necessary; then do what’s possible; and suddenly you are doing the impossible.\n-Francis of Assisi", "I can’t change the direction of the wind, but I can adjust my sails to always reach my destination.\n–Jimmy Dean", "Believe you can and you’re halfway there.\n–Theodore Roosevelt", "Optimism is the faith that leads to achievement. Nothing can be done without hope and confidence.\n―Helen Keller", "Abled does not mean enabled. Disabled does not mean less abled.\n ― Khang Kijarro Nguyen", "So many of our dreams at first seem impossible, then they seem improbable, and then, when we summon the will, they soon become inevitable.\n– Christopher Reeve", "No pessimist ever discovered the secret of the stars, or sailed to an uncharted land, or opened a new doorway for the human spirit.\n— Helen Keller", "Know me for my abilities, not my disability.\n— Robert M. Hensel", "In life you have a choice: Bitter or Better? Choose better, forget bitter.\n— Nick Vujicic"]
            random_choice = random.choice(_quotes)


            if current_time.hour < 12:
                _morning = Messagebox.okcancel(title="Summary", message=f"→ Good morning, The date today is {d} and your computer is {pla}\n\nQUOTE OF THE DAY\n{random_choice}", buttons=["Speak:primary", "Cancel"], icon=PATH/ 'icons8_spy_80px.png')
                if _morning == "Speak":
                    import pyttsx3
                    if pla == "Windows":

                        engine = pyttsx3.init(driverName="sapi5")
                    else:
                        engine = pyttsx3.init()

                    engine.say(f"Good morning. The date today is {d} and your computer is {pla}. Quote of the day. {random_choice}")
                    engine.runAndWait()

            elif 12 <= current_time.hour < 18:
                from ttkbootstrap.icons import Emoji
                _emoji = Emoji.get("WHITE SUN WITH SMALL CLOUD")
                _afternoon = Messagebox.okcancel(title="Summary", message=f"→ Good afternoon {_emoji}, The date today is {d} and your computer is {pla}\n\nQUOTE OF THE DAY\n{random_choice}", buttons=["Speak:primary", "Cancel"],  icon=PATH/ 'more-info.png')
                if _afternoon == "Speak":
                    import pyttsx3
                    if pla == "Windows":
                        engine = pyttsx3.init(driverName="sapi5")
                    else:
                        engine = pyttsx3.init()


                    engine.say(f"Good afternoon. The date today is {d} and your computer is {pla}. Quote of the day. {random_choice}")
                    engine.runAndWait()
            else:
                _evening = Messagebox.okcancel(title="Summary", message=f"→ Good evening, The date today is {d} and your computer is {pla}\n\nQUOTE OF THE DAY\n{random_choice}", buttons=["Speak:primary", "Cancel"], icon=PATH/ 'more-info.png')
                if _evening == "Speak":
                    import pyttsx3
                    if pla == "Windows":
                        engine = pyttsx3.init(driverName="sapi5")
                    else:
                        engine = pyttsx3.init()

                    engine.say(f"Good evening. The date today is {d} and your computer is {pla}. Quote of the day. {random_choice}")
                    engine.runAndWait()

        # SUMMARY BUTTON

        summary_btn = ttk.Button(
                master=action_frame,
                image='$_-|summary',
                text='Summary',
                command=__info,
                compound=TOP,
                bootstyle=INFO
                ).pack(side=TOP, fill=BOTH, ipadx=10, ipady=10)

        # FEATURES BUTTON

        def __features():
            __t = Messagebox.ok(title="FEATURES", message="\n→ Works offline.\n→ Text to ASL.\n→ Text to Braille.\n→ Text to Speech.\n→ ASL Quizzes.\n→ Braille Quizzes.\n→ Data Analysis.\n")

        features_btn = ttk.Button(
                master=action_frame,
                image='$_-|features',
                text='Features',
                command=__features,
                compound=TOP,
                bootstyle=INFO
                ).pack(side=TOP, fill=BOTH, ipadx=10, ipady=10)

        # TOOLS BUTTON

        def __tools():
            __t = Messagebox.okcancel(title="Tools", message="1) Data Analysis & Forecasting tool\nForecasting is to predict or estimate (a future event or trend). This is actualized by determining what is going to happen in the future by analyzing what happened in the past and what is going on now.This tool can be used to analyse students' performance.\n\n2) Text to ASL\nTranslation of text to sign language is also be given as a task during sign language study session. This tool can easily produce the correct answers and because the visual stays on screen, students can follow the hand movements at their own pace.\nAmerican Sign Language is one of the most popular sign languages around the world. Although it contains the same alphabets as English, it is not a subset of the English language. Sentence formation or the sequence of words in a sentence is different in ASL as compared to English because of its unique grammar rules. ASL uses the one-hand fingerspelling method for the English Alphabet\n\n3) Text to Braille\nThis software uses Unicode braille characters. This tool attempts to achieve as much accuracy as possible", buttons=["Speak:danger", "Cancel"], icon=PATH /'icons8-arrow-64.png')
            if __t == "Speak":
                import platform
                import pyttsx3
                pla = platform.system()
                if pla == "Windows":
                    engine = pyttsx3.init(driverName="sapi5")
                else:
                    engine = pyttsx3.init()

                engine.say("Data Analysis & Forecasting tool. Forecasting is to predict or estimate a future event or trend. This is actualized by determining what is going to happen in the future by analyzing what happened in the past and what is going on now.This tool can be used to analyse students' performance.  Text to ASL. Translation of text to sign language is also be given as a task during sign language study session. This tool can easily produce the correct answers and because the visual stays on screen, students can follow the hand movements at their own pace.  American Sign Language is one of the most popular sign languages around the world. Although it contains the same alphabets as English, it is not a subset of the English language. Sentence formation or the sequence of words in a sentence is different in ASL as compared to English because of its unique grammar rules. ASL uses the one-hand fingerspelling method for the English Alphabet.  Text to Braille. This software uses Unicode braille characters. This tool attempts to achieve as much accuracy as possible")
                engine.runAndWait()

        tools_btn = ttk.Button(
            master=action_frame,
            image='$_-|tools',
            text='Tools',
            compound=TOP,
            command=__tools,
            bootstyle=INFO
            ).pack(side=TOP, fill=BOTH, ipadx=10, ipady=10)



        # ABOUT BUTTON
        def __about():
            __a = Messagebox.okcancel(title="About Peritia", message='About Peritia\n\nPeritia is Latin word which means experience or practical knowledge.\nIn this context peritia is a computer software for Text to ASL and Text to Braille, it can also be used as a data analytics tool i.e to check and analyse students` performance, teachers can use the output to set reasonable and measurable goals based on current and historical data.\nUSAGE\nPress `ESC` to exit\n\n© Gerrishon Sirere\nTHE SOFTWARE IS PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE', buttons=["Speak:danger", "Cancel"], icon=PATH/ 'icons8-about-64.png')
            if __a == "Speak":
                import pyttsx3
                import platform
                pla = platform.system()
                if pla == "Windows":
                    engine = pyttsx3.init(driverName="sapi5")
                else:
                    engine = pyttsx3.init()
                engine.say("Peritia is Latin word which means experience or practical knowledge. In this context peritia is a computer software for Text to ASL and Text to Braille, it can also be used as a data analytics tool i.e to check and analyse students` performance, teachers can use the output to set reasonable and measurable goals based on current and historical data.")
                engine.runAndWait()

        about_btn = ttk.Button(
                master=action_frame,
                image='$_-|about',
                text='About',
                command=__about,
                compound=TOP, 
                bootstyle=INFO).pack(side=TOP, fill=BOTH, ipadx=10, ipady=10)

        # EXIT BUTTON
        def __exit():
            return exit()

        exit_btn = ttk.Button(
                master=action_frame,
                image='$_-|exit',
                text='Exit',
                command=__exit,
                compound=TOP,
                bootstyle=INFO
                )
        exit_btn.pack(side=TOP, fill=BOTH, ipadx=10, ipady=10)

        # option notebook
        notebook = ttk.Notebook(self)
        notebook.grid(row=1, column=1, sticky=NSEW, pady=(30, 0))

        # windows tab
        windows_tab = ttk.Frame(notebook, padding=10)

        wt_scrollbar = ttk.Scrollbar(windows_tab)
        wt_scrollbar.pack(side=RIGHT, fill=Y)
        wt_scrollbar.set(0, 1)
       # d = ttk.Label(
             #   master=windows_tab,
              #  image='$_-|fingers',
            #    text='PRIVACY',
             #   compound=TOP,
               # anchor=CENTER)
     #   d.pack(fill=BOTH)

       # left_panel = ttk.Frame(d, style='bg.TFrame')
      #  left_panel.pack(side=LEFT, fill=Y)
        # backup summary (collapsible)
       # import collapsing_frame as cf
       # bus_cf = cf.CollapsingFrame(left_panel)
       # bus_cf.pack(fill=X, pady=1)
       # bus_frm = ttk.Frame(bus_cf, padding=5)
        #bus_frm.columnconfigure(1, weight=6)
       # bus_cf.add(
             #   child=bus_frm,
              #  title='Games & More',
              #  bootstyle=INFO  
             #   )
      #  lbl = ttk.Label(bus_frm, text="ddd", font = ('calibri', 10, 'bold'),
        #background = 'purple',
       # foreground = 'white')
       # lbl.pack(fill=X, pady=1)

       # def __asl_q():
      #      from ttkbootstrap.dialogs import Querybox
         #   q1 = Messagebox.okcancel(message="Welcome to the game", buttons=["Start:primary", "Cancel:secondary"], icons=PATH /'hellothere.png')
         #   if q1 == 'Start':
           #     q2 = Querybox.get_string(prompt="What is your name?", icon=PATH / '_h.png')
            #    if q2:
            #        q3 = Messagebox.ok(message=f"Welcome to the game {q2}", icon=PATH / 'hellothere.png')
              #     if q3 == 'OK':
           #             q4 = Querybox.get_string(prompt="What letter is this?")
                    #    print(q4)#icon=PATH / '_h.png') 
       # games_btn = ttk.Button(
             #   master=bus_frm,
             #   image='$_-|games-button',
               # text='ASL Quizzes',
             #   command=__asl_q,
             #   compound=TOP,
               # bootstyle=WARNING)#INFO
       # games_btn.pack(side=TOP, fill=BOTH, ipadx=5, ipady=5)
       # sep = ttk.Separator(games_btn, bootstyle=SECONDARY)
      #  sep.pack()#grid(row=5, column=0, columnspan=2, pady=10, sticky=EW)

        wt_canvas = ttk.Canvas(
            master=windows_tab,
            relief=FLAT,
            borderwidth=0,
            selectborderwidth=0,
            highlightthickness=0,
            yscrollcommand=wt_scrollbar.set
        )
        wt_canvas.pack(side=LEFT, fill=BOTH)

        # adjust the scrollregion when the size of the canvas changes
        wt_canvas.bind(
            sequence='<Configure>',
            func=lambda e: wt_canvas.configure(
                scrollregion=wt_canvas.bbox(ALL))
        )
        wt_scrollbar.configure(command=wt_canvas.yview)
        scroll_frame = ttk.Frame(wt_canvas)
        wt_canvas.create_window((0, 0), window=scroll_frame, anchor=NW)

        radio_options = [
            'Works offline', 'Text to ASL', 'Text to Braille',
            'Text to Speech', 'ASL Quizzes',
            'Braille Quizzes', 'Data Analysis'
        ]

        edge = ttk.Labelframe(
            master=scroll_frame,
            text='Quizzes & more',
            padding=(10, 5)
        )
        edge.pack(fill=BOTH, expand=YES, padx=20, pady=10)

        left_panel = ttk.Frame(edge, style='bg.TFrame')
        left_panel.pack(side=LEFT, fill=Y)

        #backup summary (collapsible)
        import collapsing_frame as cf
        bus_cf = cf.CollapsingFrame(left_panel)
        bus_cf.pack(fill=X, pady=1)
        bus_frm = ttk.Frame(bus_cf, padding=8)
        bus_frm.columnconfigure(1, weight=6)
        bus_cf.add(
                child=bus_frm,
                title='Games & More',
                bootstyle=INFO
                )

        def time():
            from time import strftime
            string = strftime('%H:%M:%S %p')
            clock_lbl.config(text = string)
            clock_lbl.after(1000, time)

        clock_lbl = ttk.Label(
                bus_frm,
                font = ('calibri', 10, 'bold'),
                anchor=CENTER)
        clock_lbl.pack(side=TOP, fill=BOTH, ipadx=5, ipady=5)
        time()

        def __asl_q():
            _ur_name = Querybox.get_string(title="NAME", prompt="What is your name ?")

            if _ur_name:
                __my_name = Messagebox.okcancel(title="WELCOME", message=f"Welcome to the game {_ur_name}", buttons=["Start:primary", "Cancel:secondary"], icon=PATH/'welcome-peritia.png')
                if __my_name == "Start":

                    __q1 = Messagebox.okcancel(title="WHICH ONE IS SOUP?", message="HINT:Spooning soup out of a bowl  fingers are spoon, hand is a bowl", buttons=["OPTION A:primary", "OPTION B:secondary"], icon=PATH/'whichoneissoup.png')
                    if __q1 == "OPTION A":
                        __q2 = Messagebox.okcancel(title="CONGRATULATIONS", message=f"Congratulations {_ur_name}!!, you passed your first test.", buttons=["Next:primary", "Cancel:secondary"], icon=PATH /"icons8-clapping-64.png")
                        if __q2 == "Next":
                            __q3 = Messagebox.okcancel(title="WHICH ONE IS TEA?", message="HINT: Dipping a tea bag in a cup", buttons=["OPTION A:primary", "OPTION B:secondary"], icon=PATH/'whichoneistea.png')
                            if __q3 == "OPTION B":
                                __q4 = Messagebox.okcancel(title="WHICH SIGN IS THIS?", message="Which sign is this?", buttons=["Orange:danger", "Cookie:secondary", "Milk:primary"], icon=PATH/'whichsignisthis1.png')
                                if __q4 == "Cookie":
                                    __q5 = Messagebox.okcancel(message=f"CONGRATULATIONS {_ur_name}, keep going!!", buttons=["Next:primary", "Cancel:danger"], icon=PATH/'celebratory.png')
                                    if __q5 == "Next":
                                        __q6 = Messagebox.okcancel(title="WHICH ONE IS GOOD?", message="Select one option", buttons=["OPTION 1:danger", "OPTION 2:success"], icon=PATH/'whichoneisgood.png')
                                        if __q6 == "OPTION 2":
                                            __q7 = Messagebox.okcancel(title="WHICH SIGN IS THIS?", message="Select one option", buttons=["WATER:success", "ORANGE:primary", "BIKE"], icon=PATH/'whichsignisthiswater.png')
                                            if __q7 == "WATER":
                                                __q8 = Messagebox.okcancel(title="WHICH ONE IS EAT?", message="HINT: As if placing food on the mouth.", buttons=["OPTION A", "OPTION B:primary"], icon=PATH/'whichoneiseat.png')
                                                if __q8 == "OPTION A":
                                                    __q9 = Messagebox.okcancel(title="WHICH SIGN IS THIS?", message="", buttons=["BREAD:primary", "MILK:secondary", "BOWL:success"], icon=PATH/'whichsignisthisbowl.png')
                                                    if __q9 == "BOWL":
                                                        __q10 = Messagebox.okcancel(message="Way to go", icon=PATH/'Celebration.png')

            else:
                Messagebox.ok(message="Ok then!              ", icon=PATH/'icons8-sad-96.png')


        games_btn = ttk.Button(
                master=bus_frm,
                image='$_-|games-button',
                text='ASL Quizzes',
                command=__asl_q,
                compound=TOP,
                bootstyle=WARNING)
        games_btn.pack(side=TOP, fill=BOTH, ipadx=5, ipady=5)


        braille_btn = ttk.Button(
                master=bus_frm,
                image='$_-|games-button',
                text='Braille Quizzes',
                #command=__asl_q,
                compound=TOP,
                bootstyle=INFO)
        braille_btn.pack(side=TOP, fill=BOTH, ipadx=5, ipady=5)

        def __t2s():
            from ttkbootstrap.dialogs import Querybox
            _query = Querybox.get_string(title="Text to speech", prompt="Write your message directly into the box below and click submit")
            if _query:

                import platform
                import pyttsx3
                _pla = platform.system()

                if _pla == "Windows":
                    engine = pyttsx3.init(driverName='sapi5')
                else:
                    engine = pyttsx3.init()

                engine.say(_query)
                engine.runAndWait()

                if _query == "":
                    Messagebox.show_warning(message="You didn`t type anything")

        t2s_btn = ttk.Button(
                master=bus_frm,
                image='$_-|t2s-button',
                text='Text to speech',
                command=__t2s,
                compound=TOP,
                bootstyle=SECONDARY)
        t2s_btn.pack(side=TOP, fill=BOTH, ipadx=5, ipady=5
                )

        def __data_a():
            _msgbox = Messagebox.okcancel(title="Data analysis & Forecasting", message="Forecasting is a technique that uses historical data as inputs to make informed estimates that are predictive in determining the direction of future trends.", buttons=["Browse:success", "Cancel"], icon=PATH/'data-analysis2.png')
            if _msgbox == "Browse":
                from tkinter.filedialog import askopenfilename

                path_file = askopenfilename()
                if path_file.endswith(".csv"):
                    import pandas as pd
                    import matplotlib.pyplot as plt
                    import seaborn as sns

                    from seaborn import regression

                    sns.set()

                    plt.style.use('seaborn-whitegrid')

                    data = pd.read_csv(path_file)

                    #Shape of data

                    shape_ = data.shape

                    print("Shape of Dataset is: ",shape_,"\n")

                    print(data.head())

                    data.dropna()
                    plt.figure(figsize=(10, 4))

                    get_title = Querybox.get_string(title="Title", prompt="What will be the title of the graph be?")

                    if get_title:
                        get_x = Querybox.get_string(title="x axis", prompt="X-axis label")
                        if get_x:
                            get_y = Querybox.get_string(title="y axis", prompt="Y-axis label")
                            if get_y:
                                get_z = Querybox.get_string(title="Title of data", prompt="Data to plot")


                    plt.title(get_title)
                    plt.xlabel(get_x)
                    plt.ylabel(get_y)
                    plt.plot(data[get_z])
                    plt.show()

                    from autots import AutoTS

                    model = AutoTS(
                            forecast_length=10,
                            frequency='infer',
                            ensemble='simple',
                            drop_data_older_than_periods=200
                            )

                    model = model.fit(
                            data,
                            date_col=_x,
                            value_col=_y,
                            id_col=None
                            )
                    prediction = model.predict()

                    forecast = prediction.forecast
                    print("DogeCoin Price Prediction")
                    print(forecast)


           # if path_file.endswith('.pdf'):

              #  import tabula
                # Read a PDF File

              #  df = tabula.read_pdf(path_file, pages='all')[0]

                # convert PDF into CSV
                #new_name = path_file.replace('.pdf', '.csv')
               # tabula.convert_into(
                     #   "path_file",
                    #    new_name,
                      #  output_format="csv", pages='all')
              #  print(df)
              #  import pandas as pd
              #  import matplotlib.pyplot as plt 
              #  import seaborn as sns

              #  from seaborn import regression
              #  sns.set()

              #  plt.style.use('seaborn-whitegrid')
              #  data = pd.read_csv(df)

                #Shape of data
             #   shape_ = data.shape

               # print("Shape of Dataset is: ",shape_,"\n")
              #  print(data.head())

             #   data.dropna()
            #    plt.figure(figsize=(10, 4))
#
             #   get_title = Querybox.get_string(title="Title", prompt="What will be the title of the graph be?")

             #   if get_title:
                #    get_x = Querybox.get_string(title="x axis", prompt="X-axis label")
                   # if get_x:
                 #       get_y = Querybox.get_string(title="y axis", prompt="Y-axis label")

             #   plt.title(get_title)
             #   plt.xlabel(get_x)
             #   plt.ylabel(get_y)
              #  plt.plot(data["Close"])
              #  plt.show()

        data_analysis_btn = ttk.Button(
                master=bus_frm,
                image='$_-|small-blue-diamond-button',
                text='Data analysis',
                command=__data_a,
                compound=TOP,
                bootstyle=DANGER)
        data_analysis_btn.pack(side=TOP, fill=BOTH, ipadx=5, ipady=5)


        #explorer = ttk.Labelframe(
          #  master=scroll_frame,
          #  text='Internet Explorer',
          #  padding=(20, 5)
       # )
      #  explorer.pack(fill=BOTH, padx=20, pady=10, expand=YES)

        # add radio buttons to each label frame section
        for section in [edge]:#explorer]:
            for opt in radio_options:
                cb = ttk.Checkbutton(section, text=opt, state=NORMAL)
                cb.invoke()
                cb.pack(side=TOP, pady=2, fill=X)
        notebook.add(windows_tab, text='more...')

        # empty tab for looks
        # privacy card
     #   privs_card = ttk.Frame(
          #      master=self,#windows_tab, #cards_frame,
          #      padding=1,                                                        ).pack(side=LEFT, fill=BOTH, padx=(10, 5), pady=10)
      #  privs_container = ttk.Frame(
          #      master=privs_card,
            #    padding=40,
            #    ).pack(fill=BOTH, expand=YES
       # edges = ttk.Labelframe(
              #  master=scroll_frame,
              #  text='Microsjoft Edge',
              #  padding=(20, 5)
             #   )
       # for section in [edges]:
         #   privs_lbl = ttk.Label(
                #    master=edges, #privs_container,
             #       image='privacy',
                 #   text='PRIVACY',
                 #   compound=TOP,
            #        anchor=CENTER
               #     ).pack(fill=BOTH, padx=20, pady=(40, 0))

      #  ttk.Label(
          #      master=privs_container,
           #     textvariable='privs_lbl',
            #    bootstyle=PRIMARY
           #     ).pack(pady=(0, 20))

      #  self.setvar('privs_lbl', '6025 tracking file(s) removed')
       # notebook.add(ttk.Frame(notebook), text='applications')

        # results frame
        results_frame = ttk.Frame(self)
        results_frame.grid(row=1, column=2, sticky=NSEW)

        # progressbar with text indicator
        pb_frame = ttk.Frame(results_frame, padding=(0, 10, 10, 10))
        pb_frame.pack(side=TOP, fill=X, expand=YES)

        pb = ttk.Progressbar(
            master=pb_frame,
            bootstyle=(SUCCESS, STRIPED),
            length=100, 
            mode='determinate',
            variable='progress'
        )
        pb.pack(side=LEFT, fill=X, expand=YES, padx=(15, 10))

        ttk.Label(pb_frame, text='%').pack(side=RIGHT)
        ttk.Label(pb_frame, textvariable='progress').pack(side=RIGHT)
        self.setvar('progress', 100)

        # result cards
        cards_frame = ttk.Frame(
            master=results_frame,
            name='cards-frame',
            bootstyle=SECONDARY
        )
        cards_frame.pack(fill=BOTH, expand=YES)

        # Fingerspelling card
        fingerspelling_card = ttk.Frame(
                master=cards_frame,
                padding=1)
        fingerspelling_card.pack(side=LEFT, fill=BOTH, padx=(10, 5), pady=10)

        fingerspelling_container = ttk.Frame(
                master=fingerspelling_card,
                padding=40)
        fingerspelling_container.pack(fill=BOTH, expand=YES)

        fingerspelling_lbl = ttk.Label(
                master=fingerspelling_container,
                image='$_-|fingers',
                text='TEXT & NUMBERS TO ASL',
                compound=TOP,
                anchor=CENTER
                )
        fingerspelling_lbl.pack(fill=BOTH, padx=20, pady=(40, 0))

        ttk.Label(
            master=fingerspelling_container,
            textvariable='fingerspelling_lbl',
            bootstyle=PRIMARY).pack(pady=(0, 20))
        self.setvar('fingerspelling_lbl', 'Convert alphabet & numbers to ASL')

        def get_texts():
            from tkinter import TclError
            string = fingerspelling_entry.get()
            try:
                if string == "":
                    sign_lbl.configure(text="Type any letter from (a-z)\n or numbers from (0-9)", image="placeholder1")
                if string.lower() == "a":
                    _a = Messagebox.okcancel(title="A", message="The letter A is signed by holding up your dominant hand in a fist, facing outward, with the thumb sticking up to the side of the fist. This looks like the small letter 'a', but upside down, where the thumb sticking up reminds you of the serif sticking out the side of the small letter `a`.", buttons=["Related signs", "Speak:success", "Cancel"], icon= PATH/"a.png")
                    if _a == "Speak":
                        import pyttsx3
                        engine = pyttsx3.init(driverName='sapi5')
                        engine.say(f"The letter A is signed by holding up your dominant hand in a fist, facing outward, with the thumb sticking up to the side of the fist. This looks like the small letter a but upside down, where the thumb sticking up reminds you of the serif sticking out the side of the small letter a")
                        engine.runAndWait()

                    elif _a == "Related signs":
                         __a = Messagebox.okcancel(message="To sign airplane, take your outstretched hand, and tuck in your middle and ring fingers. Then move your hand away from your body a short distance, as if flying, bobbing it back and forth a couple of times. If you move your hand a bit further up and out, slightly above your head, that's already the sign for fly.", buttons=["Speak:success", "Cancel"],icon=PATH/'airplane.png')
                         if __a == "Speak":
                             import pyttsx3
                             engine = pyttsx3.init(driverName='sapi5')
                             engine.say("To sign airplane, take your outstretched hand, and tuck in your middle and ring fingers. Then move your hand away from your body a short distance, as if flying, bobbing it back and forth a couple of times. If you move your hand a bit further up and out, slightly above your head, that's already the sign for fly.")
                             engine.runAndWait()

                      #   if __a == "Play":
                          #   from itertools import cycle
                           #  from PIL import Image, ImageTk, ImageSequence
                          #   gif_path = PATH /'spinners.gif'

                           #  with Image.open(gif_path) as im:
                              #   sequence = ImageSequence.Iterator(im)
                               #  images = [ImageTk.PhotoImage(s) for s in sequence]
                             #    image_cycle = cycle(images)

                             #    framerate = im.info["duration"]
                               #  img_container = ttk.Label(fingerspelling_card, image=next(image_cycle))
                             #    img_container.pack(fill="both", expand="yes")
                            #     after(framerate, next_frame)
                          #   def next_frame(self):
                              #   """Update the image for each frame"""
                           #      img_container.configure(image=next(image_cycle))
                               #  after(framerate, nex)
                             #rom tkinter import *
                            # root = ttk.Window()

                           #  win = ttk.Toplevel(root)
                             #root = Tk()

                           #  root.geometry('200x100')
                             #btn = Button(root, text="Create a new window", command = create)
                             #btn.pack(pady = 10)
                          #   root.mainloop()
                               #  import animated_gif as ag
                              #   root = ttk.Window()

                              #   ttk.Toplevel(root)
                               #  ag.AnimatedGif(root)
                            #     root.mainloop()



                if string.lower() == "b":
                    _b = Messagebox.okcancel(title="B", message="The letter B is signed by holding up your dominant hand open, with palm facing out and all 4 fingers standing straight and kept together, while tucking your thumb into your palm. This somehow resembles the small letter 'b'.", buttons=['Related signs', 'Speak:success', 'Cancel'], icon=PATH / "b.png")
                    if _b == "Speak":
                        import pyttsx3
                        engine = pyttsx3.init(driverName='sapi5')
                        engine.say("The letter B is signed by holding up your dominant hand open, with palm facing out and all 4 fingers standing straight and kept together, while tucking your thumb into your palm. This somehow resembles the small letter b")
                        engine.runAndWait()

                    if _b == 'Related signs':
                        __b = Messagebox.okcancel(message='To do the sign for baby, cross your arms with hands facing up, one arm resting on the other while touching one elbow with the fingers from the opposite hand, as if you are cradling a baby in your arms. Then gently move your hands from side to side, as if rocking the imaginary baby in your arms.', buttons=["Speak:success", "Cancel"], icon=PATH/'baby.png')
                        if __b == "Speak":
                            import pyttsx3
                            engine = pyttsx3.init(driverName='sapi5')
                            engine.say("To do the sign for baby, cross your arms with hands facing up, one arm resting on the other while touching one elbow with the fingers from the opposite hand, as if you are cradling a baby in your arms. Then gently move your hands from side to side, as if rocking the imaginary baby in your arms.")
                            engine.runAndWait()

                if string.lower() == "c":
                    _c = Messagebox.okcancel(title="Letter C", message="The letter C is signed by curving your open, dominant hand just like the letter 'C', where the top 4 fingers held together make up the top curve, and the thumb makes up the bottom curve.", buttons=["Related signs", "Speak:success", "Cancel"], icon=PATH / 'c.png')

                    if _c == "Speak":
                        import pyttsx3
                        engine = pyttsx3.init(driverName='sapi5')
                        engine.say('To do the sign for baby, cross your arms with hands facing up, one arm resting on the other while touching one elbow with the fingers from the opposite hand, as if you are cradling a baby in your arms. Then gently move your hands from side to side, as if rocking the imaginary baby in your arms.')
                        engine.runAndWait()

                    if _c == "Related signs":
                        __c = Messagebox.okcancel(message="Candy is signed by taking your index finger and touching it just under the mouth area on one side of your chin. Twist the finger back-and-forth. We remember this sign, because it looks a little like you are drilling your tooth - the consequence of eating too much candy", buttons=["Speak:success", "Cancel"], icon=PATH/'candy.png')
                        if __c == "Speak":
                            import pyttsx3
                            engine = pyttsx3.init(driverName='sapi5')
                            engine.say("Candy is signed by taking your index finger and touching it just under the mouth area on one side of your chin. Twist the finger back-and-forth. We remember this sign, because it looks a little like you are drilling your tooth - the consequence of eating too much candy")
                            engine.runAndWait()

                if string.lower() == "d":
                    _d = Messagebox.okcancel(title="Letter D", message="The letter D is signed by holding up your dominant hand, curving your middle, ring, and pinkie fingers together and touching them to your thumb, while only your index finger is standing upright.\nThis looks just like the small letter 'd'.", buttons=['Related signs', "Speak:success", 'Cancel'], icon=PATH / 'd.png')
                    if _d == "Speak":
                        import pyttsx3
                        engine = pyttsx3.init(driverName='sapi5')
                        engine.say("The letter D is signed by holding up your dominant hand, curving your middle, ring, and pinkie fingers together and touching them to your thumb, while only your index finger is standing upright. This looks just like the small letter d.")
                        engine.runAndWait()

                    if _d == 'Related signs':
                        __d = Messagebox.okcancel(message='To make the dance sign, take your non-dominant hand and hold it out in front of you with the palm side facing up. With your dominant hand, extend your middle and index fingers like an upside down ’V’ and swing them back and forth above your open palm.', buttons=["Speak:success", "Cancel"], icon=PATH/'dance.png')
                        if __d == "Speak":
                            import pyttsx3
                            engine = pyttsx3.init(driverName='sapi5')
                            engine.say("To make the dance sign, take your non-dominant hand and hold it out in front of you with the palm side facing up. With your dominant hand, extend your middle and index fingers like an upside down V and swing them back and forth above your open palm.")
                            engine.runAndWait()

                if string.lower() == "e":
                    _e = Messagebox.okcancel(title="Letter E", message="The letter E is signed by holding up your dominant hand, palm facing out, with your top 4 fingers all touching each other and tightly curved in, while your thumb is also curved and tightly tucked into your palm, touching the tips of the fingers above.\nThis looks just like the small letter 'e'.", buttons=['Related signs', 'Speak:success', 'Cancel'], icon=PATH / 'e.png')
                    if _e == "Speak":
                        import pyttsx3
                        engine = pyttsx3.init(driverName='sapi5')
                        engine.say("The letter E is signed by holding up your dominant hand, palm facing out, with your top 4 fingers all touching each other and tightly curved in, while your thumb is also curved and tightly tucked into your palm, touching the tips of the fingers above. This looks just like the small letter e.")
                        engine.runAndWait()

                    if _e == 'Related signs':
                        __e = Messagebox.okcancel(message='Make the sign for eat by taking your dominant hand, forming a flat ASL letter O sign, and tapping your fingers to your mouth once. To sign food, make the same handshape but tap your fingers to your mouth twice.\nThis universal sign for eating is the same sign used for food. The only difference is that verbs are signed once, and nouns are signed twice.', buttons=["Speak:success", "Cancel"], icon=PATH/'eat.png')
                        if __e == "Speak":
                            import pyttsx3
                            engine = pyttsx3.init(driverName='sapi5')
                            engine.say("Make the sign for eat by taking your dominant hand, forming a flat ASL letter O sign, and tapping your fingers to your mouth once. To sign food, make the same handshape but tap your fingers to your mouth twice. This universal sign for eating is the same sign used for food. The only difference is that verbs are signed once, and nouns are signed twice.")
                            engine.runAndWait()



                if string.lower() == "f":
                    _f = Messagebox.okcancel(title="Letter F", message="The letter F is signed by holding up your dominant hand, palm facing out, with your index finger and thumb touching, while your 3 other fingers are held up and spread apart.\nMake sure to form a circle with your thumb and index finger touching. Otherwise, if you flatten out your thumb and index a bit more, it will look like you are signing the number '9'.", buttons=['Related signs', 'Cancel'], icon=PATH / 'f.png')
                    if _f == 'Related signs':
                        Messagebox.ok(message='To sign face, trace the outline of your face with your dominant hand’s index finger, starting at the chin, then going up and around and back down to the chin.', icon=PATH/'face.png')
                if string.lower() == "g":
                    _g = Messagebox.okcancel(title="Letter G", message="Theletter G is signed by holding out your dominant hand in a fist, with knuckles lined up vertically. Keep your middle, ring, and pinkie fingers curled in, while your index finger and thumb stick out parallel to each other.", buttons=['Related signs', 'Cancel'], icon=PATH / 'g.png')
                    if _g == 'Related signs':
                        Messagebox.ok(message='Game is signed by making both hands into a fist with your thumbs sticking up, then thumping your fists together. In ASL, the sign for challenge is similar to the sign for game, but just use a bigger motion and more body language to indicate that it is a more serious matter with challenge.\nThink of players thumping fists while playing a game to remember the sign.', icon=PATH /'game.png')

                if string.lower() == "h":
                    _h = Messagebox.okcancel(title="Letter H", message="The letter H is signed by holding out your dominant hand horizontally, palm facing in, with your index and middle fingers held out together, straight and stacked horizontally, index at the top.\nThe rest of the fingers and thumb are curled in.", buttons=['Related signs', 'Cancel'], icon=PATH / 'h.png')
                    if _h =='Related signs':
                        Messagebox.ok(message='To sign hair, simply grab one or several hairs using the thumb and index of your dominant hand.', icon=PATH/ 'hair.png')


                if string.lower() == "i":
                    _i = Messagebox.okcancel(title="Letter I", message="The letter I is signed by holding up your dominant hand in a fist, palm facing out, with only your pinkie finger sticking up straight.", buttons=["Related signs", "Cancel"], icon=PATH / 'i.png')
                    if _i == "Related signs":
                        Messagebox.ok(message="To sign idea, first form the letter I sign with your dominant hand. Then touch the tip of your pinkie finger to your forehead before you lift your 'I' hand diagonally upward, away from your head. It is like an idea has been released from your mind.", icon=PATH/'idea.png')
                if string.lower() == "j":
                    _j = Messagebox.okcancel(title="Letter J", message="The letter J is signed by holding up your dominant hand, palm facing out, with your fingers curled into a fist except your pinkie sticking out. Then make a 'J' in the air with your pinkie finger, starting from the top of the 'J' stem down and curving up again to form the bottom part of the letter. It is as if you are dipping your pinkie finger in a jar of jam!", buttons=["Related signs", "Cancel"], icon=PATH / 'j.png')
                    if _j == "Related signs":
                        Messagebox.ok(message="Jacket is signed exactly like coat: take both hands and make them into fists with your thumbs sticking up - or the 'A' letter sign in ASL. Move your two fists up and down in front of the chest, as if to adjust both lapels of your coat.", icon=PATH/'jacket.png')

                if string.lower() == "k":
                    _k = Messagebox.okcancel(title="Letter K", message="The letter K is signed by holding up your dominant hand, palm facing out, with your index and middle fingers sticking up like the letter 'V' (or like the common `peace` sign), while your thumb is tucked at the base of the two extended fingers. Your two remaining fingers are curled in, touching your palm.\nThe letter K is signed like P, but the latter is signed with the 'V' legs pointing down.", buttons=["Related signs", "Cancel"], icon=PATH / 'k.png')
                    if _k == "Related signs":
                        Messagebox.ok(message="Make the baby sign for key by taking your dominant hand and hooking your index finger. Use the knuckle of that finger and twist it against the palm of your other hand, like turning a key in a lock.", icon=PATH/'key.png')

                if string.lower() == "l":
                    _l = Messagebox.okcancel(title="Letter L", message="The letter L is signed by holding up your dominant hand, palm facing out, with your thumb and index finger sticking out at a right angle to each other, while the last 3 fingers are curled in. This is the capital letter 'L'.", buttons=["Related signs", "Cancel"], icon=PATH / 'l.png')
                    if _l == "Related signs":
                        Messagebox.ok(message="The sign for lion is like a lion running its paw through its own mane. Make your hand into a claw shape with your fingers curved and apart. Take your hand, and with the palm down, run it from above the front of your forehead down toward the back of your head.", icon=PATH/'lion.png')

                if string.lower() == "m":
                    _m = Messagebox.okcancel(title="Letter M", message="The letter M is signed by holding up your dominant hand, palm facing out, with all your fingers curled into your palm. Then tuck your thumb between your ring and pinkie fingers. This sign looks like the small letter 'm', with the 3 fingers' bumps reminding us of the letter written in cursive.", buttons=["Related signs", "Cancel"], icon=PATH / 'm.png')
                    if _m == "Related signs":
                        Messagebox.ok(message="The milk sign is a lot like milking a cow (or goat), but without the vertical motion - you are just squeezing the udder. You take your dominant hand, make it into a fist, relax, and repeat.\nYou will notice most babies have trouble moving all fingers together at uniform speeds, but any kind of repeated squeezing and relaxing of the hand is likely milk. If you want to distinguish breast milk from bottle milk, sign milk near your breast.", icon=PATH/'milk.png')


                if string.lower() == "n":
                    _n = Messagebox.okcancel(title="Letter N", message="The letter N is signed by holding up your dominant hand, palm facing out, with all your fingers curled into your palm. Then tuck your thumb between your middle and ring fingers. This sign looks like the small letter 'n', with the 2 fingers' bumps reminding us of the letter written in cursive.", buttons=["Related signs", "Cancel"], icon=PATH / 'n.png')
                    if _n == "Related signs":
                        Messagebox.ok(message="The sign for no is like that scolding teacher in high school that always says no to everything. The sign looks like a mouth saying no. Take your index finger together with your middle finger and tap them together with your thumb.", icon=PATH/'no.png')

                if string.lower() == "o":
                    _o = Messagebox.okcancel(title="Letter O", message="The letter O is signed by curving all your fingers and touching them to your thumb, making the shape of the letter 'O' with your entire hand.", buttons=["Related signs", "Cancel"], icon=PATH / 'o.png')
                    if _o == "Related signs":
                        Messagebox.ok(message="To do the open sign, take both hands together with palms facing you. Swing your dominant hand apart and away from your non-dominant hand. The sign looks like you are opening a door.", icon=PATH/'open.png')

                if string.lower() == "p":
                    _p = Messagebox.okcancel(title="Letter P", message="The letter P is signed like K, but the former is held upside down. Hold down your dominant hand, palm facing in, with your index and middle fingers sticking out like an inverted letter 'V', while your thumb is tucked in between the two extended fingers.\nYour two remaining fingers are curled in, touching your palm.", buttons=["Related signs", "Cancel"], icon=PATH / 'p.png')
                    if _p == "Related signs":
                        Messagebox.ok(message="To sign pancakes, take both your flat open palms and hold them together, both facing up, with your non-dominant hand under the dominant one, like the top hand is the pancake and the bottom hand is the frying pan. Then make a large flipping motion with your open dominant hand until it is facing palm down and touching your opposite palm. It is as if you are turning over a pancake to cook its other side.", icon=PATH/'pancakes.png')

                if string.lower() == "q":
                    _q = Messagebox.okcancel(title="Letter Q", message="The letter Q is signed like G, but the former is held upside down.\n\nThe letter Q is signed by holding down your dominant hand, palm facing in, with your with knuckles lined up horizontally. Keep your middle, ring, and pinkie fingers curled in, while your index finger and thumb stick out parallel to each other, like two legs of a person standing up.", buttons=["Related signs", "Cancel"], icon=PATH / 'q.png')

                    if _q == "Related signs":
                        Messagebox.ok(message="The sign for queen looks like you are outlining the queen's sash with the ASL letter 'Q'.\n\nStart by taking your dominant hand and extending your thumb and index finger into the ASL sign for 'Q'. Then take your hand and starting at the opposite shoulder, trace a path across your body to your non-dominant hip.", icon=PATH / "queen.png")

                if string.lower() == "r":
                    _r = Messagebox.okcancel(title="Letter R", message="The letter R is signed by holding up your dominant hand, palm facing out, with your index and middle fingers intertwined like vines. The rest of your fingers and thumb are curled in. This looks just like the small letter 'r'.", buttons=["Related signs", "Cancel"], icon=PATH / 'r.png')
                    if _r == "Related signs":
                        Messagebox.ok(message="The bunny/rabbit sign looks like the long ears of a rabbit, twitching. Make both hands into fists and place them on top of your head, with middle and index fingers extended to make the rabbit ears. Bend and extend the middle and index fingers to the back of your head, as if to make the ears twitch.\n\nAn alternative ASL sign for rabbit or bunny is to just use one hand, your dominant hand, and make the index and middle fingers twitch back as you hold the rest of your fingers in a fist on one side of your head.", icon=PATH / 'rabbit.png')

                if string.lower() == "s":
                    _s = Messagebox.okcancel(title="Letter S", message="The letter S is signed by holding up your dominant hand into a fist, palm facing out.\n\nMake sure your thumb is tucked in front of your fingers. Otherwise, you might sign the letter A by mistake.", buttons=["Related sign", "Cancel"], icon=PATH / 's.png')
                    if _s == "Related sign":
                        Messagebox.ok("To sign shoes, make your two hands into fists and tap the two together laterally. Imagine your fists are shoes and you are clicking the shoes together.", icon=PATH / 'shoes.png')

                if string.lower() == "t":
                   _t = Messagebox.okcancel(title="Letter T", message="The letter T is signed by holding up your dominant hand into a fist, palm facing out, and your thumb tucked in between your index and middle finger", buttons=["Related signs", "Cancel"], icon=PATH / 't.png')
                   if _t == "Related signs":
                       Messagebox.ok(message="To sign train, take both hands, extending the middle and index fingers. Take your dominant hand and rub the fingers slowly down the same fingers on the non-dominant hand. It is like your fingers are a train, going down a pair of train tracks.", icon=PATH /'train.png')

                if string.lower() == "u":
                    _u = Messagebox.okcancel(title="Letter U", message="The letter U is signed by holding up your dominant hand in a fist, facing outward, with the index & middle fingers sticking up while held together.", buttons=["Related signs", "Cancel"], icon=PATH / 'u.png')
                    if _u == "Related signs":
                        Messagebox.ok(message="To do the baby sign for unicorn, place an 'R' hand on your forehead and move it upward and forward, as if representing the horn of a unicorn.", icon=PATH /'unicorn.png')

                if string.lower() == "v":
                    _v = Messagebox.okcancel(
                            title="Letter V", 
                            message="The letter V is signed by holding up your dominant hand in a fist, facing outward, with the index and middle fingers sticking out and spread apart. It looks just like the letter `V`",
                            buttons=["Related signs", "Cancel"], 
                            icon=PATH / 'v.png')

                    if _v == "Related signs":
                        Messagebox.ok(
                                message="To sign for vomit, open your dominant hand with all fingers separated, then point the thumb toward the mouth and pull the hand down 90 degrees, as if showing the trajectory of vomit.",
                                icon=PATH/ 'vomit.png')

                if string.lower() == "w":
                    _w = Messagebox.okcancel(title="Letter W", message="The letter W is signed by holding up your dominant hand in a fist, palm facing out, with your index, middle, and ring fingers sticking out. This looks just like the letter 'W'.\nBe careful not to confuse this with the number '3' in ASL, where your thumb sticks out instead of your ring finger.", buttons=["Related signs", "Cancel"], icon=PATH / 'w.png')
                    if _w == "Related signs":
                        Messagebox.ok(message="Wake Up is signed with your eyes and hands. Start with your eyes closed and your hands in fists, with each pointer finger touching each thumb, on either side of your face underneath your eyes or resting above your cheeks.\nThen open both your eyes and your pinched indexes and thumbs at the same time, as you utter, `Wake up!`", icon=PATH/'wakeup.png')

                if string.lower() == "x":
                    _x = Messagebox.okcancel(title="Letter X", message="The letter X is signed by holding up your dominant hand in a fist, palm facing out. Then stick out your index finger and bend it into a hook", buttons=["Related signs", "Cancel"], icon=PATH / 'x.png')
                    if _x == "Related signs":
                        Messagebox.ok(message="The xylophone sign looks like you are tapping away on the xylophone. To sign xylophone, make both hands into a fist with the thumb on top of the fingers. Then make short swings up and down with your arms while moving them across your body, as if you are playing the imaginary xylophone with the sticks in your hands.", icon=PATH/'xylophone.png')

                if string.lower() == "y":
                    _y = Messagebox.okcancel(title="Letter Y", message="The letter Y is signed by holding up your dominant hand, palm facing out, with your thumb and pinkie finger sticking out and the rest of your fingers curled in.", buttons=["Related signs", "Cancel"], icon=PATH / 'y.png')
                    if _y == "Related signs":
                        Messagebox.ok(message="The yes sign looks a head nodding yes. You take your hand and make it into a fist, holding it at about shoulder height, then make your fist bob back and forth.", icon=PATH/'yes.png')

                if string.lower() == "z":
                    _z = Messagebox.okcancel(title="Letter Z", message="The letter Z is signed by holding up the index finger of your dominant hand, palm facing out with the rest of the fingers drawn into a fist, and tracing the letter 'Z' with your index in the air.", buttons=["Related signs", "Cancel"], icon=PATH/ 'z.png')
                    if _z == "Related signs":
                        Messagebox.ok(message="Zipper is a natural sign. Take both hands and pinch the thumb to the index finger on either hand. Your non-dominant hand stays put at the imagined location of the zipper, while the dominant hand makes the motion of unzipping and zipping from the `base` where the non-dominant hand is positioned.\nMake the sign for zipper wherever you want your baby to mimic the action, on his or her clothing or backpack, for example.", icon=PATH/'zipper.png')

                # NUMBERS
                if string == "0":
                    Messagebox.ok(title="Number 0", message="The number 0 is signed by holding up your hand in an `O` handshape and moving it forward with a firm stop.", icon=PATH / '0.png')
                if string == "1":
                    Messagebox.ok(title="Number 1", message="The number 1 is signed by holding up your dominant hand in a fist, facing towards you, with your index finger sticking out.\n\nDon't confuse the number 1 for the letter I, where you stick out your pinkie finger from your fist, facing out.", icon=PATH / "1.png")
                if string == "2":
                    Messagebox.ok(title="Number 2", message="The number 2 is signed by holding up your dominant hand in a fist, facing towards you, with your index and middle fingers sticking out.\n\nThe number 2 looks like the letter V, but this letter has the fist facing out. So to sign the number 2, make sure your fist is facing inward.", icon=PATH / "2.png")
                if string == "3":
                    Messagebox.ok(title="Number 3", message="The number 3 is signed by\nholding up your dominant hand in a fist, \nfacing towards you, then sticking out your thumb,\n index and middle fingers.\n\nDon't confuse the number 3 with the letter W (where you stick out your index, middle, and ring fingers, with palm facing outward)", icon=PATH / '3.png')
                if string == "4":
                    Messagebox.ok(title="Number 4", message="The number 4 is signed by holding up your hand in a fist, facing towards you, then sticking out your four fingers spread apart while your thumb is tucked in.", icon=PATH / '4.png')
                if string == "5":
                    Messagebox.ok(title="Number 5", message="The number 5 is signed by holding up your hand, facing towards you, and sticking out all your 5 fingers.", icon=PATH/ '5.png')
                if string.lower() == "6":
                    Messagebox.ok(title="Number 6", message="The number 6 is signed by holding up your open, hand facing out, then touching your thumb and pinkie finger together.", icon=PATH / '6.png')
                if string.lower() == "7":
                    Messagebox.ok(title="Number 7", message="The number 7 is signed by holding up your open, hand, facing out, then touching your thumb and ring finger together", icon=PATH / '7.png')
                if string.lower() == "8":
                    Messagebox.ok(title="Number 8", message="The number 8 is signed by holding up your open, hand, facing out, then touching your thumb and middle finger together.", icon=PATH /'8.png')
                if string.lower() == "9":
                    Messagebox.ok(title="Number 9", message="The number 9 is signed by holding up your open, hand, facing out, then touching your thumb and index finger together.\nMake sure to flatten out your thumb and index a bit more. Otherwise, if you form a circle with your thumb and index finger touching, it will look like you are signing the letter `F`", icon=PATH/'9.png')
                if string == "10":
                    Messagebox.ok(title="Number 10", message="The number 10 is signed by holding up your hand in a fist, with thumb sticking up, then twisting your hand at the wrist back and forth.", icon=PATH/'10.png')
                else:
                    sign_lbl.configure(text="")
              #  if len(string.lower()) > 1:
                  #  root = ttk.Window()
    # fs_images = [
                    #        ttk.PhotoImage(
                     #           name="a",
                          #      file=PATH /"a.png"),
                         #   ttk.PhotoImage(
                         #       name="b",
                           #     file=PATH /"a.png")
                         #   ]

                   # root.attributes("-type", "dialog")
                  #  frame = ttk.Frame(root, width=600, height=400)
                   # frame.pack()
                   # frame.place(anchor='center', relx=0.5, rely=0.5)
                   # canvas = ttk.Canvas(root, width = 300, height = 300)
                   # canvas.pack()
                  #  from PIL import ImageTk, Image

                   # img = ImageTk.PhotoImage(Image.open(PATH /"a.png"))
                   # canvas.create_image(20, 20, anchor=NW, image=img)
                   # root.mainloop()

                  #  for s in string.lower():
                      #  from PIL import ImageTk, Image

                      #  img = ImageTk.PhotoImage(Image.open(PATH /"a.png"))
                
                      #  Label(frame, image=img).pack()#side=LEFT)
                      #  s=+1

                 #   ttk.Label(root, text="").pack(side=LEFT)
                   # root.mainloop()
            except TclError:
                sign_lbl.configure(text="Letter/Text not found!!")
            print(fingerspelling_entry.get())

        sign_lbl = ttk.Label(
                    master=fingerspelling_container,
                    image= "", #"placeholder1",
                    text='Type any letter from (a-z) or numbers from (0-10)',
                    compound=TOP,
                    anchor=CENTER
                    )
        sign_lbl.pack(padx=20) #fill=BOTH, padx=20, pady=(40, 0)


        fingerspelling_entry= ttk.Entry(fingerspelling_container, width= 30)
        fingerspelling_entry.focus_set()
        fingerspelling_entry.pack()

        ttk.Button(fingerspelling_container, text= "Check",width= 10, command=get_texts).pack(pady=20)

        # braille card
        braille_card = ttk.Frame(
            master=cards_frame,
            padding=1,
        )
        braille_card.pack(side=LEFT, fill=BOTH, padx=(5, 10), pady=10)
        
        braille_container = ttk.Frame(braille_card, padding=40)
        braille_container.pack(fill=BOTH, expand=YES)
        
        braille_lbl = ttk.Label(
            master=braille_container, 
            image='$_-|info',
            text='TEXT & NUMBERS TO BRAILLE', 
            compound=TOP, 
            anchor=CENTER,
        )
        braille_lbl.pack(fill=BOTH, padx=20, pady=(40, 0))
        
        ttk.Label(
            master=braille_container, 
            textvariable='braille_lbl',
            bootstyle=PRIMARY, 
            justify=CENTER
        ).pack(pady=(0, 20))
        self.setvar('braille_lbl', 'Convert letters & numbers to Braille')
        def __get_brailles():
            from tkinter import TclError
            string = braille_entry.get()

            try:

                if string.lower() == "a":
                    Messagebox.ok(title="Letter A", message='', icon=PATH /'braille-a.png')

                if string.lower() == "b":
                    Messagebox.ok(title="Letter B", message='', icon=PATH /'braille-b.png')

                if string.lower() == "c":                                                 Messagebox.ok(title="Letter C", message='', icon=PATH /'braille-c.png')

                if string.lower() == "d":                                                 Messagebox.ok(title="Letter D", message='', icon=PATH /'braille-d.png')


                if string.lower() == "e":                                                 Messagebox.ok(title="Letter E", message='', icon=PATH /'braille-e.png')

                if string.lower() == "f":                                                 Messagebox.ok(title="Letter F", message='', icon=PATH /'braille-f.png')

                if string.lower() == "g":                                                 Messagebox.ok(title="Letter G", message='', icon=PATH /'braille-g.png')

                if string.lower() == "h":                                                 Messagebox.ok(title="Letter H", message='', icon=PATH /'braille-h.png')

                if string.lower() == "i":                                                 Messagebox.ok(title="Letter I", message='', icon=PATH /'braille-i.png')

                if string.lower() == "j":                                                 Messagebox.ok(title="Letter J", message='', icon=PATH /'braille-j.png')

                if string.lower() == "k":                                                 Messagebox.ok(title="Letter K", message='', icon=PATH /'braille-k.png')

                if string.lower() == "l":                                                 Messagebox.ok(title="Letter L", message='', icon=PATH /'braille-l.png')

                if string.lower() == "m":                                                 Messagebox.ok(title="Letter M", message='', icon=PATH /'braille-m.png')

                if string.lower() == "n":                                                 Messagebox.ok(title="Letter N", message='', icon=PATH /'braille-n.png')

                if string.lower() == "o":                                                 Messagebox.ok(title="Letter O", message='', icon=PATH /'braille-o.png')

                if string.lower() == "p":                                                 Messagebox.ok(title="Letter P", message='', icon=PATH /'braille-p.png')

                if string.lower() == "q":                                                 Messagebox.ok(title="Letter Q", message='', icon=PATH /'braille-q.png')

                if string.lower() == "r":                                                 Messagebox.ok(title="Letter R", message='', icon=PATH /'braille-r.png')

                if string.lower() == "s":                                                 Messagebox.ok(title="Letter S", message='', icon=PATH /'braille-s.png')

                if string.lower() == "t":                                                 Messagebox.ok(title="Letter T", message='', icon=PATH /'braille-t.png')

                if string.lower() == "u":                                                 Messagebox.ok(title="Letter U", message='', icon=PATH /'braille-u.png')

                if string.lower() == "v":                                                 Messagebox.ok(title="Letter V", message='', icon=PATH /'braille-v.png')

                if string.lower() == "w":                                                 Messagebox.ok(title="Letter W", message='', icon=PATH /'braille-w.png')

                if string.lower() == "x":                                                 Messagebox.ok(title="Letter X", message='', icon=PATH /'braille-x.png')

                if string.lower() == "y":                                                 Messagebox.ok(title="Letter Y", message='', icon=PATH /'braille-y.png')
                if string.lower() == "z":                                                 Messagebox.ok(title="Letter Z", message='', icon=PATH /'braille-z.png')

                #NUMBERS

                if string == "1":
                    Messagebox.ok(title="Number 1", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-1.png')

                if string == "2":                                                         Messagebox.ok(title="Number 2", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-2.png')
                if string == "3":                                                         Messagebox.ok(title="Number 3", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-3.png')

                if string == "4":                                                         Messagebox.ok(title="Number 4", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-4.png')

                if string == "5":                                                         Messagebox.ok(title="Number 5", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-5.png')

                if string == "6":                                                         Messagebox.ok(title="Number 6", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-6.png')

                if string == "7":                                                         Messagebox.ok(title="Number 7", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-7.png')
                if string == "8":                                                         Messagebox.ok(title="Number 8", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-8.png')
                if string == "9":                                                         Messagebox.ok(title="Number 9", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-9.png')
                if string == "10":                                                         Messagebox.ok(title="Number 10", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-10.png')

                #PUNCTUATIONS

                if string == ".":
                    Messagebox.ok(title="Fullstop", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-p-fullstop.png')

                if string == ",":                                                         Messagebox.ok(title="Comma", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-p-comma.png')

                if string == "?":                                                         Messagebox.ok(title="Question mark", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-p-questionmark.png')

                if string == "(":                                                         Messagebox.ok(title="Open bracket", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-p-openb.png')

                if string == ")":                                                         Messagebox.ok(title="Close bracket", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-p-closeb.png')
                if string == "-":
                    Messagebox.ok(title="Hyphen", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-p-hyphen.png')

                if string == "!":
                    Messagebox.ok(title="Exclamation mark", message='Numbers use the same braille characters as the alphabet letter symbols A to J – with the exception of France', icon=PATH /'braille-p-excalmate.png')







            except TclError:
                __inp = string.lower()
                Messagebox.show_warning(message=f"{__inp} not found")

        braille_lbl = ttk.Label(
                master=braille_container,
                image= "", #"placeholder1",
                text='Type any letter from (a-z) or numbers from (1-10) and punctuations',
                compound=TOP,
                anchor=CENTER
                )
        braille_lbl.pack(padx=20)

        braille_entry= ttk.Entry(braille_container, width= 30)
        braille_entry.focus_set()
        braille_entry.pack()

        ttk.Button(braille_container, text= "Check",width
= 10, command=__get_brailles).pack(pady=20)


        # user notification
        note_frame = ttk.Frame(
            master=results_frame, 
            bootstyle=SECONDARY, 
            padding=40
        )
        note_frame.pack(fill=BOTH)
        
        note_msg = ttk.Label(
            master=note_frame, 
            text='| Text to ASL | Text to Braille | Text to Speech | ASL Quizzes | Braille Quizzes | Data Analysis |', 
            anchor=CENTER,
            font=('Helvetica', 12, 'italic'),
            bootstyle=(INVERSE, SECONDARY)
        )
        note_msg.pack(fill=BOTH)


if __name__ == '__main__':

    app = ttk.Window("Peritia: All in one assistive software", "vapor")
    def _exit():
        exit()

  #  def ctrl_a():
       # import animated_gif as ag
      #  app = ttk.Window()

       # ag.AnimatedGif(app)
    app.bind('<Escape>', lambda event:_exit())
    #app.bind('a', lambda event:ctrl_a())

    Cleaner(app)
    app.mainloop()
