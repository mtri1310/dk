export const dynamic = 'force-static'; // This will make the route static
export const revalidate = 10; // This will revalidate the route every 60 seconds
export async function GET() {
    return Response.json({time: new Date().toLocaleTimeString()});
}