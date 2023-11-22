# Weekly diary


## June
16/6/2023

virtual violin

This month I have initially determined that I want to make a virtual violin project. Because I have been learning the violin since I was a child, whenever I play the violin I feel like I am in a world that belongs only to me, in which I can completely relax. At the same time, I will also play different music according to my different moods every day. For example, when I'm in a good mood, I play some upbeat, pounding music. And when I'm not in a good mood, I play some calm, melodious music. Every time I am immersed in the sound of my own music, I feel relaxed to a certain extent.

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/dea82ff2-8944-4c97-b6f4-76e573bb3f3c)

I want to create such a music world of their own for each user, so that people who cannot play music can easily play beautiful music and create their own music world. A world where you can freely express your emotions.

From this I started to come up with preliminary designs:

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/284ab362-11bb-43bb-a37e-8e2fd31807ad)

The original idea was to use machine learning to judge the user's actions to distinguish the timbres of cello and violin. In this way, unknown timbres can be output according to different actions, and the user can play various violin timbres during use.

To this end, I also conducted some tests using professional websites to determine whether human movements can be recognized smoothly.

Test website:

https://teachablemachine.withgoogle.com/train/pose


![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/64d41553-9055-46fb-8e07-0b8dd1537011)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/93a89147-3fd1-4611-be30-fddd00caf8e8)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/48a6ece7-abb6-4ec0-8cc1-811cb9a94fdd)

During the test, I found that there is not much difference in the movements of the two violins, and there is a certain error in the recognition. You must have very professional experience to make very standard movements, otherwise the recognition will be blurred.


On the other hand, for the research on hand sensing devices, I initially want to use the pressure sensor to judge the degree of finger bending, and then judge and output the musical scale.

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/ab0f0e2c-4ba3-44a6-8745-238bf1e46feb)

However, I think the above plan has many loopholes and shortcomings.

First of all, I want to make music that people who don’t know how to play can play good music on their own. However, machine learning requires standard movements to judge the timbre of cello and violin, which virtually increases the user's learning cost. It doesn't fit in with my original design intention.


Secondly, pressure sensing also has many loopholes. Excessive use will affect the accuracy of readings, so other sensors need to be considered.

## July
### Week 1 (July 3-July 9)

In response to the remaining questions from last month, I began to look for some relevant theoretical knowledge and projects.

First I decided to look at some music installation projects about virtual instruments
​
Arduino Based Piano with Recording and Replay

https://circuitdigest.com/microcontroller-projects/arduino-piano-with-record-and-playback

Laser of GuQin

https://www.manamana.net/video/detail?id=1419#!zh

Music interactive wall

https://www.manamana.net/video/detail?id=1675567#!zh

Research project: Arduino midi instrument

https://www.bilibili.com/video/av458682670/?vd_source=692e92a426b7d23c2d9ae1e922096efd

https://www.bilibili.com/video/BV18b4y1d7nL/?vd_source=692e92a426b7d23c2d9ae1e922096efd

Installation design related to mood, emotion and music

https://www.bilibili.com/video/BV1sY4y1Y7ov/?spm_id_from=333.880.my_history.page.click&vd_source=692e92a426b7d23c2d9ae1e922096efd

The above is part of the research on installation art. After research, I came up with new ideas:

I want to design an installation that can play different music according to the user's mood. This device allows people who do not know how to play music to play their own music, and the melody will be different every time it is played, and will change according to the mood at the time of playing.

### Week 2\3 (July 10-July 23)

What effect does music have on people's emotions?

Reading data link records are as follows:

Steps towards a Meta-theory of Music Therapy?
https://www.tandfonline.com/doi/abs/10.1080/08098130109478030

https://zhuanlan.zhihu.com/p/51900906

The relationship between music preference and type D personality

Yu-Chi Chung, Alinka E. Greasley, Li-Yu Hu

https://doi.org/10.1177/0305735617733809

Emotional regulation is one of the important reasons why people listen to music, and personality traits have been shown to have an important influence on the formation of music preferences.

Music as an emotion regulation strategy: A survey of music genres and their role in emotion regulation

Terence Cook, Ashlin R. K. Roy, Keith M. Welker

https://doi.org/10.1177/0305735617734627

Research shows that people often use music to regulate their emotions. Energetic and rhythmic music was positively associated with the use of all investigated forms of musical emotion regulation, suggesting that this dimensional type of music is particularly useful for regulating emotions. 

These results highlight the potential use of music as an emotion regulation tool.

A comparative study on the emotional perception of music between visually impaired and non-impaired adults

Hye Young Park, Hyun Ju Chong

https://doi.org/10.1177/0305735617745148

By using specific, emotion-inducing music to reflect happiness, sadness, anger, and fear, this study considered factors such as musical emotion recognition, emotional valence, arousal, intensity, and music preference.

Cultural stereotypes of emotional responses to music genres

Marco Susino, Emery Schubert

https://doi.org/10.1177/0305735618755886

This study investigated whether affective responses to music genres can be predicted by cultural stereotypes associated with the music genre.

Exploring the personality and musical self-perception of vocal music majors and musical instrument major students in the Conservatory of Music

Maria Sandgren

https://doi.org/10.1177/0305735618761572

Effects of music on arousal, pleasure, and cognitive performance

Hayoung A. Lim, Heekyeong Park

https://doi.org/10.1177/0305735618766707

The relationship between arousal and cognitive performance following musical experience was investigated across different musical activities.

Emotional intelligence, alexithymia, stress, and why people listen to music
​
Adam J. Lonsdale

https://doi.org/10.1177/0305735618778126

This study examined the relationship between people's reasons for listening to music and trait emotional intelligence and alexithymia, while controlling for the effects of participants' gender, age, and perceived stress levels.


How music affects the brain

https://hkincus.com/zh-cn/blogs/blogs/the-brain-and-music-how-music-affects-the-brain

https://www.sciencedaily.com/releases/2014/06/140618100536.htm

How does the brain process music?

https://pubmed.ncbi.nlm.nih.gov/18335666/

The induction effect of Chinese and Western music on emotions

file:///Users/xiao/Downloads/%E4%B8%AD&minus%3B%E8%A5%BF%E6%96%B9%E9%9F%B3%E4%B9%90%E5%AF%B9%E6%83%85%E7%BB%AA%E7%9A%84%E8%AF%B1%E5%8F%91%E6%95%88%E5%BA%94.pdf

The study of the relationship between music and emotion has important theoretical significance. 

Music can induce many different emotions. For most people, the main motivation for listening to music is emotion induction. 

Using music to induce emotions has many advantages. On the one hand, music can induce emotions with high intensity. On the other hand, music can not only induce unpleasant emotions, but also induce pleasant emotions. This is better than using static pictures to induce emotions. have more advantages. 

Cognitive neuroscience believes that human emotions arise from the intuitive processing of various internal and external stimuli, but the specific brain mechanism of the entire process of emotion induction is currently unclear.

Therefore, using music to induce emotions provides a unique perspective on answering this question. The study of the relationship between music and emotion has important practical significance. Currently, music has been widely used to improve physical health, reduce stress, and distract or concentrate attention.

How to detect user emotions in a simple way.

Mood and body temperature

https://zhuanlan.zhihu.com/p/57884093

https://zhuanlan.zhihu.com/p/610133809

Perceived mood and skin body temperature rhythm in depression

https://link.springer.com/article/10.1007/s004060050033

Effectofinducingnocturnalserummelatoninconcentrationsindaytimeonsleep,mood,body temperature,and performance

https://www.pnas.org/doi/epdf/10.1073/pnas.91.5.1824

https://zhuanlan.zhihu.com/p/108146525


![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/5f1960cf-f43e-481a-ae96-bd9996700795)


Links to papers related to virtual musical instruments are as follows:

https://www.nime.org/proceedings/2008/nime2008_299.pdf

### Week 4 (July 24-July 30)

Start designing user research this week

Based on the information collected, I plan to design a survey and an experiment.

The research part adopts the form of questionnaire survey to investigate the needs of users.

User needs research: users’ level of understanding of music

Purpose of the experiment: Through this experiment, I wanted to gain an in-depth understanding of the participants’ level of musical understanding of the cello and violin and their level of interest in these two instruments.

Additionally, I will investigate the challenges and difficulties participants may face when using electronic music to gain a more comprehensive understanding of their experiences interacting with music.

By analyzing this data, I hope to provide useful insights for music education and technology improvements, promoting more productive learning and artistic experiences.

The designed questionnaire questions are as follows:

a)Have you ever attended a cello or violin recital? (Single choice question) [Yes/No]

b) Are you interested in composing your own music for cello or violin? (Single choice question) [Yes/No]

c) Have you ever experienced virtual electronic instruments? (Single choice question) [Yes/No]

d) What type of virtual electronic instrument are you experiencing? (Questions and Answers)

e) What do you think is the most difficult thing when playing virtual instruments? (Q&A)

I created two questionnaires, a Chinese version and an English version.

English version:

https://wj.qq.com/s2/13598985/0992/

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/5fb13132-d0e3-4fbf-a75e-71b5fe6de8f5)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/461ba74f-37de-4ddf-af6d-6e5b70b9119d)

Chinese Version:

https://wj.qq.com/s2/13598985/0992/

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/fa84d5fe-7d1e-4d49-8de1-826af08c1a87)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/348ee9bf-0f94-4c63-ad0e-8d78d2408f65)

After completing the design of the questionnaire, I sent the questionnaire to my college classmates. Ask them to help fill it out. Results are expected to be tallied next week.

## August
### Week 1 (July 31-August 6)

A total of 38 questionnaires were collected last week, of which 30 had valid usable data.

Based on these valid data, I completed the statistics.

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/54b7be49-f3b5-41ac-99ab-13867df1f84c)


Through the analysis of the above table, the following preliminary observations and conclusions can be obtained:

Most participants reported having attended a cello or violin recital, which may mean they have some knowledge of or interest in these two instruments.

Approximately half of the participants expressed an interest in creating music, indicating that a portion of those surveyed are interested in actively participating in music creation. 

Participants experienced a variety of types of virtual electronic instruments, including virtual piano, virtual guitar, virtual drum set, virtual orchestra, etc. This reflects participants' interest in diverse musical tools.

When experiencing virtual musical instruments, participants mentioned difficulties including finding rhythm, editing notes, small operating interface, rhythm, not recognizing music scores, and learning fingering, etc. 

This feedback provides designers with useful information for virtual music tool improvements and user training.

### Week 2 (August 7-August 13)

Start designing experiments this week. The purpose of the experiment is to examine the different effects of major and minor music on users in the same situation.

Before I started designing the experiment, I re-read some relevant articles. The reference articles for this experimental design are as follows.

file:///Users/xiao/Downloads/%E4%B8%AD&minus%3B%E8%A5%BF%E6%96%B9%E9%9F%B3%E4%B9%90%E5%AF%B9%E6%83%85%E7%BB%AA%E7%9A%84%E8%AF%B1%E5%8F%91%E6%95%88%E5%BA%94.pdf

https://doi.org/10.1177/0305735618766707

https://doi.org/10.1177/0305735618778126

https://hkincus.com/zh-cn/blogs/blogs/the-brain-and-music-how-music-affects-the-brain

https://www.sciencedaily.com/releases/2014/06/140618100536.htm

https://zhuanlan.zhihu.com/p/57884093

https://zhuanlan.zhihu.com/p/610133809

Based on the collected information, I want to determine the user's emotion through body temperature detection.

So far this week I have initially designed the experimental process.

In this music experiment, I will play the violin as the main body, and some music in major and minor keys.

Before the experiment begins, the subject will wear a temperature test sensor and record the initial body temperature in a quiet environment.

The music playing arrangement is divided into two parts. 

First, major music is played. After each segment is played, I will record the body temperature and subjective feelings of the experimenter. Such records include the physiological changes and emotional experiences of the experimenters during the music process.

After the major-key music ended, I would provide subjects with a short rest interval to ensure they could recover from the effects of the previous piece of music. During this interval, I will record the subject's body temperature again.

Next, I'm going to play music in a minor key. Similarly, after the music ends, I will record the body temperature and feelings of the experimenter again.

Finally, after the minor music played, I recorded the body temperature of the experimenter again to obtain the physiological changes during the entire experiment.

The purpose of this experiment was to gain insight into the effects of music in major and minor keys on an individual's emotional and physiological state. 

By carefully recording the reactions of experimenters when listening to music of different modes, I hope to reveal the regulatory effects of music on emotions and physiology, and provide useful data support for music therapy and emotion research.

### Week 3 (August 14-August 20)

Based on last week's design, I started looking for suitable music to test.

Looking for music suitable for testing needs to meet the following requirements:

1. The selected fragment needs to meet the requirements of major or minor.
   
2. The selected clip should not be too familiar. I will choose subjects who have not systematically studied music to conduct the experiment. If I choose too famous clips that everyone has heard for testing, it may affect the feelings of the subjects, thereby affecting the usability and authenticity of the data.
   
3. The selection of musical styles in major and minor keys requires relatively obvious contrast.

4. Because there are big differences between Western music and Chinese classical music, and the violin is a Western instrument, in order to make the experimental data more credible and avoid the influence of some cultural differences, we try to choose music produced by famous Western composers.

Alternative snippets:

Beethoven Violin Concerto in D major
https://www.youtube.com/watch?app=desktop&v=kKYBzUkQxaw

Vitali "Chaconne"
https://www.youtube.com/watch?v=aZpF2VHufS4

Saint-Saëns Violin Sonata No. 1 in D minor
https://www.bilibili.com/video/BV1FR4y1J7q3/?vd_source=692e92a426b7d23c2d9ae1e922096efd

William Walton "Violin Concerto in B minor"
https://www.bilibili.com/video/BV13U4y1a7wX/?vd_source=692e92a426b7d23c2d9ae1e922096efd

《The Lark Ascending》Ralph Vaughan Williams
https://www.youtube.com/watch?v=J8EI9-JwfLk

Paganini "The Bell"
https://www.youtube.com/watch?v=NYNCEE6Vdb0

Tchaikovsky violin concerto Op.35
https://www.youtube.com/watch?v=PUhKyYM8H3Q

Paganini: Violin Concerto No.1, Op.6
https://www.youtube.com/watch?v=xwy1HuX1y1o

Beethoven violin sonata in C minor No.7
https://www.bilibili.com/video/BV1wK4y1L7ch/

Schumann Violin Concerto in D minor
https://www.bilibili.com/video/BV1Da4y1P7G6/?spm_id_from=333.788.recommend_more_video.0&vd_source=692e92a426b7d23c2d9ae1e922096efd

(Devil's Trill)Violin Sonata in G minor, B.g5 'Devil's Trill' Tartini
https://www.youtube.com/watch?v=iVnB3LSmp5M

Vittorio Monti  Csárdás
https://www.youtube.com/watch?v=lF4_r1t_4JY

Introduction and Rondo Capriccioso  Saint-Saens
https://www.youtube.com/watch?v=BDJr-h4COeQ

Mendelssohn Violin Concerto in E minor
https://www.youtube.com/watch?v=C7gFnXByrmw

In the above excerpt, I chose three sections each of major and minor music.

1）Violin Concerto in D Major Op.61

This is Beethoven's only violin concerto, completed in 1806.

I chose the third movement, Allegro, Rondo, in D major.

The third movement is a lively and powerful rondo, with the main violin melody giving a deep impression. After the melody, the lead violin shows off its brilliant skills. The violin plays the theme on the four strings at the beginning. 

This jumping theme is full of joyful emotions. The overtone performance, up to the high position of the first string, spans a huge range and fully expresses joy and high emotions. 

The recurring main body is full of the simple colors and vitality of folk dance, full of joy and enthusiasm, while the interspersed parts show contrast and change in a unified pattern and mood. The climax of this movement is also the climax of the entire piece.

https://www.youtube.com/watch?app=desktop&v=kKYBzUkQxaw


2）Tchaikovsky violin concerto Op.35

This is a violin concerto composed by Russian composer Pyotr Ilyich Tchaikovsky in 1878.

I chose the first movement. Moderate Allegro, D major, 4/4 time, sonata form.

At the beginning of the first movement, the audience can feel the strong Russian style. 

As the rhythm continues to change, the notes can be felt jumping happily. After that, there are contrasts again and again in the music, whether it is strong or weak, or Rhythm, or mood, provides a wonderful preparation for the appearance of the violin. The violin, as the protagonist, plays a series of melodious and singing melodies with a soft tone that makes people think richly. 

The first movement is generally dominated by joyful emotions. The most exciting part is the alternating performance of the solo violin and the entire orchestra. The joyful atmosphere reaches the audience's heart, as if they are singing about youth, life and nature.

https://www.youtube.com/watch?v=PUhKyYM8H3Q


3）Paganini: Violin Concerto No.1, Op.6

Italian composer Niccolò Paganini composed it in 1811.

I chose the first movement, solemn Allegro, in D major, 4/4 time, sonata form. 

The music is gorgeous and varied, leaving the listener without any sense of fatigue. 

Immediately after the orchestral introduction, the lead violin presents a light, lively theme. After that, the violin's various skills are brought into full play, leading the audience into a romantic and dreamy realm. This movement is grand in scale, and the lead violin is gorgeous and elegant, and is often played alone.

https://www.youtube.com/watch?v=xwy1HuX1y1o


4) Mendelssohn's "Violin Concerto in E minor"

Mendelssohn, German composer

I chose the first movement: Passionate Allegro, in E minor, in 2/2 time, which is the most famous movement in the entire work.

This music melody has joy as the main line, but a touch of sadness is cleverly blended into it, forming a wonderful musical experience that is both happy and emotionally rich. 

With the melodiousness of the ballad, a moving musical picture unfolds, making people intoxicated and feeling the depth and richness of emotions.

https://www.youtube.com/watch?v=C7gFnXByrmw


5）Violin Sonata in G minor, B.g5 'Devil's Trill'

Tartini:

I chose the first movement of this piece: Larghetto affettuoso, in G minor

The first movement is Adagio, played very slowly. The violin melody is full of sadness, a bit resentful, and some of the stronger and longer notes even sound a bit like crying. 

It presents a tearful theme, with strong emotions lurking, as if the devil has come to visit in a world of melancholy and sadness.

https://www.youtube.com/watch?v=iVnB3LSmp5M


6）Introduction and Rondo Capriccioso

This is the most popular of the small musical works written by Saint-Saens in 1863.

The music has a strong Spanish style, with passionate and wild masculinity intertwined with melancholy and desolate emotions, and the romanticism characteristics are very obvious. The introduction part is a fantasy-like song played by the violin. 

This tune is melancholy and desolate, yet beautiful and gorgeous.

https://www.youtube.com/watch?v=BDJr-h4COeQ


### Week 4-5 (August 21-September 3)

Based on the above experimental design, I started looking for sensors to try.

Finally, the following sensors were selected as materials.


![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/a89d5fee-8256-40e7-9e02-582d08f8fa6e)


![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/3e1099a5-05cb-41ce-9780-f591ea6cca18)


Start experimenting

## September
### Week 1 (September 4th-September 10th)

<img width="1054" alt="image" src="https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/7c019949-f1bb-4c8a-adb7-b9c410d3a6b1">

In this experiment, by observing the emotional experience and physiological changes of 5 participants while listening to music in major and minor keys, the following is an analysis of the experimental results:

Influence of major music:

Subjective Feelings: Music in a major key is generally considered to have a bright, cheerful atmosphere. 

Judging from the subjective feedback of the participants, the major music part triggered a positive, relaxed, and pleasant emotional experience. They may describe feeling a cheerful, high-spirited atmosphere.

Physiological changes: When the subject listens to major-key music, the body temperature may rise slightly, reflecting the positive mental state.

Influence of minor-key music:

Subjective feeling: Minor-key music generally has a deep, melancholy musical texture. Participants may describe the emotions they feel during the minor-key musical section as pensive, melancholic, and soulful.

Physiological changes: When listening to minor music, the subject's body temperature may drop or remain relatively stable, reflecting a calm or deep psychological state.
​

<img width="944" alt="image" src="https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/9fd0b3ed-3c94-43e7-9adc-aaa6263dd734">

<img width="1011" alt="image" src="https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/8905723a-e102-4c53-90db-50337a26ee41">

### Week 2 (September 11-September 17)

Buy Arduino Materials

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/cc93dfcc-2cb1-4b27-b56c-3aac0c26eeed)

Start writing some arduino code

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/483d7200-05a9-43e5-88f5-edde6fad0827)

Perform a simple test on the temperature section.

During this time I solved some simple Arduino bugs.

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/89e707e6-506d-400d-baa0-18895c7ee836)

Draw the laser circuit diagram and link the test

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/e4ce3249-46ad-4221-b06a-fd699c0902dc)

### Week 3 (September 18-September 24)

Start writing the music part.

This week I will write 12 pieces of chord music myself and make it into mp3 format.

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/0fead876-0877-49a7-b773-250b605ba524)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/9c4805a6-fffe-485f-927c-c42eb650920a)

C major phoneme

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/7359093c-0f37-4b8e-a809-869c62159d55)

### Week 4 (September 25-October 1)

1. Continue creating chords.

a minor phoneme

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/4fc565a8-82b8-4741-b9c2-6a07bbc45bf2)

Completed 12 pieces of music production this week

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/b753b365-b54e-4003-8cbd-ff0cd0595719)

Link the lines and test

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/5391cf2c-7733-42f1-bd5a-f9943896d30f)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/6da56701-0ba1-4845-b6ad-832ccc25fb32)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/fa87cd9d-d348-4e4f-8fd9-072e62047239)

## October
### Week 1 (October 2-October 8)

1. Start writing the essay outline this week.
   
2. Write the processing part of the code

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/4387b0b8-c216-4573-a976-64dec9bd90ce)

This week we also studied how to link Arduino with processing

3. This week, I first made a simple model using a cardboard box.

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/c20320f5-1831-42c6-b95d-45ff24eb0d52)

### Week 2 (October 9th-October 15th)

1. Complete the first part of the paper this week. Introduction
   
2. Make drawings based on last week's model. And design the pattern according to the violin style.

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/1a4995e2-aa8c-446c-b661-681cb4ef11f1)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/5d2e5873-c767-458a-abf0-278e6ebf938b)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/e1bcf47b-1bcc-4fba-9a82-a146e5d89600)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/c86c603d-82df-440d-b6a5-3132c31ca982)

### Week 3 (October 16-October 22)

1. Continue writing the paper
  
2. Welding lines

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/15db7d04-73fd-4769-804b-20ed0f29e0be)

3.Laser cutting model

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/55c5a47e-3b9b-47ef-b4ff-51efc9809446)


### Week 4 (October 23-October 29)

1. Continue writing the paper

   
2. Complete the production of the design.

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/fbe2ca17-d324-4dea-a016-d5e3aab18154)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/b5955ade-0bd7-4994-80b5-5392972551ef)

![image](https://github.com/xiaoliang5939/Xiao-FinalProject/assets/76156342/11658fc6-e285-429d-80e3-af8d4aa63013)


## November
### Week 1 (October 30-November 5)

1. Continue writing papers this week
   
2. Start recording videos this week

### Week 2 (November 6th-November 12th)

1. Continue writing papers this week
  
2. Cut video
   
### Week 3 (November 13-November 19)
End of paper, check format





