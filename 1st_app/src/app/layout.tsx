// app/layout.tsx
import { Metadata } from "next";
// import { ErrorWrapper } from "./error-wrapper";

export const metadata: Metadata = {
    title: {
        default: 'My Next.js App',
        template: '%s | My Next.js App',
    }
    
  };
  
  export default function RootLayout({
    children,
  }: {
    children: React.ReactNode;
  }) {
    return (
      <html lang="vi">
        <body>
            <header
                style={{
                    backgroundColor: 'blue',
                    padding: '10px',
                    color: 'white',
                }}>
            <p>Header</p>

            </header>
            {/* <ErrorWrapper> */}
              {children}
            {/* </ErrorWrapper> */}
            <footer
                style={{
                    backgroundColor: 'ghostwhite',
                    padding: '10px',
                    color: 'white',
                }}>
            <p>Footer</p>    
            </footer>
        </body>
      </html>
    );
  }
  